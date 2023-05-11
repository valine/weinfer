# WeInfer

## Minimalist Machine Learning Inference Library with CUDA and TensorRT Support

WeInfer is a straightforward and streamlined C++ library for machine learning inference with minimum dependencies. It is built with a focus on Generative Pretrained Transformers, and is designed to utilize NVIDIA's CUDA and TensorRT technologies for efficient inference operations.

---

## Features

1. **Minimal Dependencies**: WeInfer is designed with simplicity in mind, requiring only a small set of dependencies to function.

2. **CUDA Support**: This library is compatible with CUDA, allowing the execution of inference tasks on NVIDIA GPUs.

3. **TensorRT Support**: WeInfer integrates NVIDIA's TensorRT for the optimization of deep learning models, contributing to the speed and efficiency of inference tasks.

4. **Generative Pretrained Transformers**: The primary use case of WeInfer is inference for Generative Pretrained Transformers, making it a useful tool for tasks in the realm of natural language processing.

---

## Getting Started

### Prerequisites

Please ensure that the following are installed:

- GCC 7.5.0 or later
- NVIDIA GPU (compute capability 3.5 or higher)
- CUDA 10.0 or later
- TensorRT 7.0 or later

### Build Instructions

As WeInfer uses CMake, the build process follows the standard CMake build steps:

```bash
mkdir build
cd build
cmake ..
make
```

### Usage 

```c++
#include "weinfer/infer.h"

// Load your model
Model model("path/to/your/model.weinfer");

// Input for the inference
auto input_data = ...;

// Run the inference
auto output_data = model.infer(input_data);

// Process the output
...

```
### Support

If you encounter any issues or have suggestions, please file an issue on the GitHub project page.

### Contributing

Contributions are welcome. To contribute, please submit a pull request on our GitHub project page.

### License 

WeInfer is licensed under the Apache 2.0 license. For more details, please see the LICENSE file.