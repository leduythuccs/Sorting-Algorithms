#ifndef BUBBLE_SORT_HEADER
#define BUBBLE_SORT_HEADER

#include "../helper/utils.h"

/**
 * Bubble Sort
 * Average complexity: O(n^2)
 * Best Case: O(n^2)
 * Worst Case: O(n^2)
 * Space: O(1)
 */ 
void bubble_sort(int a[], int n) {
    for (int j = n; j > 1; --j) 
        for (int i = 1; i < j; ++i)
            if (a[i - 1] > a[i]) 
                swap(a[i - 1], a[i]);
}

/**
 * Bubble Sort Optimize
 * Average complexity: O(n^2)
 * Best Case: O(n)
 * Worst Case: O(n^2)
 * Space: O(1)
 * Stable
 */ 
void bubble_sort_optimize1(int a[], int n) {
    for (int j = n; j > 1; --j) {
        bool stop = true;
        for (int i = 1; i < j; ++i)
            if (a[i - 1] > a[i]) 
                swap(a[i - 1], a[i]),
                stop = false;
        if (stop) break;
    }
}

#endif