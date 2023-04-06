#pragma once
#include <cstdio>
#include <array>
#include <span>

namespace arrays {

    void printArray(std::span<short> arr) {
        for (const auto& val : arr) {
            printf("[ARRAY] value -> %i\n", val);
        }
        printf("[ARRAY] -----------------\n");
    }
    
    void runTest() {
        printf("[ARRAY] Running array tests\n");

        std::array<short, 6> arr {0, 1, 2, 3, 4, 5};
        printf("[ARRAY] New std::array at %p\n", (void*)arr.data());
        printArray(arr);
        arr[2] *= 2;
        printArray(arr);
    }
    
}