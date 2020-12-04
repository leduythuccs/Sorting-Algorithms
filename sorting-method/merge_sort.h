#ifndef MERGE_SORT_HEADER
#define MERGE_SORT_HEADER

#include "../helper/utils.h"
#include <algorithm>
void merge_sort_DnC(int a[], int l, int r) {
    if (l == r) return;
    int mid = (l + r) >> 1;
    merge_sort_DnC(a, l, mid);
    merge_sort_DnC(a, mid + 1, r);
    std::inplace_merge(a + l, a + mid + 1, a + r + 1);
}

/**
 * Merge Sort
 * Average complexity: O(nlogn)
 * Best Case: O(nlogn)
 * Worst Case: O(nlogn)
 * Space: O(n)
 * Not Stable (Can make it Stable)
 */
void merge_sort(int a[], int n) {
    merge_sort_DnC(a, 0, n - 1);
}

#endif