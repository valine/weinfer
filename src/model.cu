#include "../include/weinfer/model.h"
#include <cuda_runtime.h>

__global__ void vectorAdd(const float *a, const float *b, float *c, int size) {
    int i = blockIdx.x * blockDim.x + threadIdx.x;
    if (i < size) {
        c[i] = a[i] + b[i];
    }
}

Model::Model(int size) : size(size), d_a(nullptr), d_b(nullptr), d_c(nullptr) {
    allocateMemory(size);
}

Model::~Model() {
    freeMemory();
}

void Model::allocateMemory(int size) {
    cudaMalloc((void**)&d_a, size * sizeof(float));
    cudaMalloc((void**)&d_b, size * sizeof(float));
    cudaMalloc((void**)&d_c, size * sizeof(float));
}

void Model::freeMemory() {
    cudaFree(d_a);
    cudaFree(d_b);
    cudaFree(d_c);
}

void Model::addVectors(const float* a, const float* b, float* c) {
    cudaMemcpy(d_a, a, size * sizeof(float), cudaMemcpyHostToDevice);
    cudaMemcpy(d_b, b, size * sizeof(float), cudaMemcpyHostToDevice);

    int threadsPerBlock = 256;
    int blocksPerGrid = (size + threadsPerBlock - 1) / threadsPerBlock;
    vectorAdd<<<blocksPerGrid, threadsPerBlock>>>(d_a, d_b, d_c, size);

    cudaMemcpy(c, d_c, size * sizeof(float), cudaMemcpyDeviceToHost);
}
