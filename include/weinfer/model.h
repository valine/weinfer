#pragma once

class Model {
public:
    Model(int size);
    ~Model();
    void addVectors(const float* a, const float* b, float* c);
    void allocateMemory(int size);
    void freeMemory();
private:
    float* d_a;
    float* d_b;
    float* d_c;
    int size;
};
