#pragma once

#include <cstdio>
#include <array>
#include <span>

namespace sorting {

    inline bool binary_search(std::span<int> arr, size_t lo, size_t hi, int val) {
        do
        {
            const size_t m = lo + ((hi - lo) / 2);

            if (arr[m] == val) return true;
            
            if (arr[m] < val) lo = m + 1;
            else hi = m;
            
        } while (lo < hi);

        return false;
    }
    
    inline void run_test() {
        printf("[SORT] Running sorting tests\n");
        std::array<int, 10> arr {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

        const bool res = binary_search(arr, 0, arr.size(), 10);
        printf("Found the value? %s\n", res ? "YES" : "NO");
    }
    
}
