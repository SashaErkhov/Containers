#pragma once

#include "Arry.h"

template <typename T, typename It>
It binarySearch(T value, It begin, It end) 
{
    auto start = begin;
    auto length = end - begin; 

    while (length > 0) {
        auto half = length / 2;
        auto mid = start + half;

        if (*mid == value) {
            return mid; // Element found
        }
        else if (*mid < value) {
            start = mid + 1;
            length -= half + 1; // Update length for the right half
        }
        else {
            length = half; // Update length for the left half
        }
    }

    return end; // Element not found, return the end of the range
}
