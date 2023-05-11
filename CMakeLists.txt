cmake_minimum_required(VERSION 3.8 FATAL_ERROR)
project(WeInfer VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(CUDA REQUIRED)

# Adjust the path according to your TensorRT installation
set(TensorRT_ROOT /path/to/TensorRT)
find_package(TensorRT REQUIRED)

# Include directories
include_directories(${CUDA_INCLUDE_DIRS})
include_directories(${TensorRT_INCLUDE_DIRS})

# Define the source files for the library
set(LIB_SOURCE_FILES lib_source1.cpp lib_source2.cpp)

# Add a library target
add_library(WeInferLib STATIC ${LIB_SOURCE_FILES})

# Link CUDA and TensorRT to the library
target_link_libraries(WeInferLib ${CUDA_LIBRARIES} ${TensorRT_LIBRARIES})

# Define the source file for the executable
set(EXE_SOURCE_FILES main.cpp)

# Add an executable target
add_executable(WeInfer ${EXE_SOURCE_FILES})

# Link the library to the executable
target_link_libraries(WeInfer WeInferLib)

