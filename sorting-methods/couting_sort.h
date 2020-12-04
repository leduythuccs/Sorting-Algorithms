#ifndef COUTING_SORT_HEADER
#define COUTING_SORT_HEADER

#include "../helper/utils.h"
int __cnt[300000];

/**
 * Counting Sort
 * Average complexity: O(n + k)
 * Best Case: O(n + k)
 * Worst Case: O(n + k)
 * Space: O(k)
 * Not Stable (Can make it stable)
 */ 
void couting_sort(int a[], int n) {
    if (n <= 0) return;
    for (int i = 0; i < n; ++i)
        ++__cnt[a[i]];
    int l = 0;
    for (int i = 0; i < n; ++i)
        for (; __cnt[i]; --__cnt[i], ++l)
            a[l] = i;
}

#endif