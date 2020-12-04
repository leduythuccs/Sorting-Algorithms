#ifndef SHAKER_SORT_HEADER
#define SHAKER_SORT_HEADER

#include "../helper/utils.h"
/**
 * Shaker Sort
 * Average complexity: O(n^2)
 * Best Case: O(n^2)
 * Worst Case: O(n^2)
 * Space: O(1)
 * Stable
 */ 
void shaker_sort(int a[], int n) {
    int L = 0, R = n - 1;
    while (L < R) {
        for (int i = L; i < R; ++i)
            if (a[i] > a[i + 1])
                swap(a[i], a[i + 1]);
        --R;
        for (int i = R - 1; i >= L; --i)
            if (a[i] > a[i + 1])
                swap(a[i], a[i + 1]);
        ++L;
    }
}

/**
 * Shaker Sort Optimize
 * Average complexity: O(n^2)
 * Best Case: O(n)
 * Worst Case: O(n^2)
 * Space: O(1)
 * Stable
 */ 
void shaker_sort_optimize1(int a[], int n) {
    bool stop = true;
    int L = 0, R = n - 1;
    while (L < R) {
        stop = true;
        for (int i = L; i < R; ++i)
            if (a[i] > a[i + 1])
                swap(a[i], a[i + 1]), 
                stop = false;
        if (stop) break;
        --R;
        stop = true;
        for (int i = R - 1; i >= L; --i)
            if (a[i] > a[i + 1])
                swap(a[i], a[i + 1]),
                stop = false;
        if (stop) break;
        ++L;
    }
}
#endif