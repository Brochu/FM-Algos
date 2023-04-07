#pragma once
#include <cstdio>
#include <array>
#include <span>

namespace arrays {

    inline void print_array(std::span<short> arr) {
        for (const auto& val : arr) {
            printf("[ARRAY] value -> %i\n", val);
        }
        printf("[ARRAY] -----------------\n");
    }
    
    inline void run_test() {
        printf("[ARRAY] Running array tests\n");

        std::array<short, 6> arr {0, 1, 2, 3, 4, 5};
        printf("[ARRAY] New std::array at %p\n", static_cast<void*>(arr.data()));
        print_array(arr);
        arr[2] *= 2;
        print_array(arr);
    }
    
}