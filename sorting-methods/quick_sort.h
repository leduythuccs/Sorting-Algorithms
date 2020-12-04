#ifndef QUICK_SORT_HEADER
#define QUICK_SORT_HEADER

#include "../helper/utils.h"
void quick_sort_DnC(int a[], int l, int r) {
    if (l == r) return;
    int pivot = a[getRandom(l, r)];
    int left = l, right = r;
    while (left <= right) {
        while (a[left] < pivot) ++left;
        while (pivot < a[right]) --right;
        if (left <= right) {
            swap(a[left], a[right]);
            ++left;
            --right;
        }
    }
    if (left < r)
        quick_sort_DnC(a, left, r);
    if (l < right)
        quick_sort_DnC(a, l, right);
}

/**
 * Quick Sort
 * Average complexity: O(nlogn)
 * Best Case: O(nlogn)
 * Worst Case: O(n^2)
 * Space: O(logn)
 * Not Stable
 * Random Pivot
 */ 
void quick_sort(int a[], int n) {
    quick_sort_DnC(a, 0, n - 1);
}

#endif