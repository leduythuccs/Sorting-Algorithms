#ifndef INSERTION_SORT_HEADER
#define INSERTION_SORT_HEADER

#include "../helper/utils.h"

/**
 * Insertion Sort
 * Average complexity: O(n^2)
 * Best Case: O(n)
 * Worst Case: O(n^2)
 * Space: O(1)
 * Stable
 */ 
void insertion_sort(int a[], int n) {
    for (int i = 1; i < n; ++i) {
        int cur = a[i];
        int j = i - 1;
        for (; j >= 0 && a[j] > cur; --j)
            a[j + 1] = a[j];
        a[j + 1] = cur;
    }
}

#endif