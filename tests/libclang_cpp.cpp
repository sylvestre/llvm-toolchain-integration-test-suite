// Test the link against libclang-cppXX
//
// REQUIRES: clang
// RUN: %clangxx -lclang-cpp -v %s -o %t
// RUN: ldd %t 2>&1|grep -q libclang-cpp
// RUN: %t

#include <chrono>
int main() {
    return 0;
}
