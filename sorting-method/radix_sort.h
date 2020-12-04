#ifndef RADIX_SORT_HEADER
#define RADIX_SORT_HEADER

#include "../helper/utils.h"
void radix_sort_DnC(int a[], int level, int l, int r) {
    if (l == r || level < 0) return;
    int left = l, right = r;
    while (left <= right) {
        while (!(a[left] >> level & 1)) ++left;
        while (a[right] >> level & 1) --right;
        if (left <= right) {
            swap(a[left], a[right]);
            ++left;
            --right;
        }
    }
    if (left < r)
        radix_sort_DnC(a, level - 1, left, r);
    if (l < right)
        radix_sort_DnC(a, level - 1, l, right);
}

/**
 * Radix Sort (MSD, Base 2)
 * Average complexity: O(nlogk)
 * Best Case: O(nlogk)
 * Worst Case: O(nlogk)
 * Space: O(logk)
 * Not Stable (Can make it Stable)
 */ 
void radix_sort(int a[], int n) {
    int level = 0;
    while ((1 << level) < n) ++level;
    radix_sort_DnC(a, level, 0, n - 1);
}

#endif