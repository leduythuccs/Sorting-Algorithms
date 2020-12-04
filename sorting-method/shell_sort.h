#ifndef SHELL_SORT_HEADER
#define SHELL_SORT_HEADER

#include "../helper/utils.h"
int gaps[] = {1750, 701, 301, 132, 57, 23, 10, 4, 1};

/**
 * Shell Sort Optimize
 * gaps: {1750, 701, 301, 132, 57, 23, 10, 4, 1}
 * Ciura, 2001
 * Average complexity: unknown
 * Best Case: O(n)
 * Worst Case: unknown
 * Space: O(1)
 * Not Stable
 */ 
void shell_sort(int a[], int n) {
    for (int gap : gaps) {
        for (int i = gap; i < n; ++i) {
            int cur = a[i];
            int j = i;
            for (; j >= gap && a[j - gap] > cur; j-= gap)
                a[j] = a[j - gap];
            a[j] = cur;
        }
    }
}

#endif