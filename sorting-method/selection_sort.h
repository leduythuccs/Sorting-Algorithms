#ifndef SELECTION_SORT_HEADER
#define SELECTION_SORT_HEADER

#include "../helper/utils.h"

/**
 * Section Sort
 * Average complexity: O(n^2)
 * Best Case: O(n^2)
 * Worst Case: O(n^2)
 * Space: O(1)
 * Stable
 */ 
void selection_sort(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int cur_min = i;
        for (int j = i + 1; j < n; ++j)
            if (a[cur_min] > a[j])
                cur_min = j;
        swap(a[cur_min], a[i]);
    }
}

/**
 * Section Sort Optimize
 * Average complexity: O(n^2)
 * Best Case: O(n^2)
 * Worst Case: O(n^2)
 * Space: O(1)
 * Not Stable (Can make it Stable)
 */ 
void selection_sort_optimize1(int a[], int n) {
    int r = n;
    for (int i = 0; i < r - 1; ++i) {
        int cur_min = i;
        int cur_max = i;
        for (int j = i + 1; j < r; ++j)
            if (a[cur_min] > a[j])
                cur_min = j;
            else if (a[cur_max] < a[j])
                cur_max = j;
        swap(a[cur_min], a[i]);
        if (cur_max == i) cur_max = cur_min;
        --r;
        swap(a[cur_max], a[r]);
    }
}

#endif