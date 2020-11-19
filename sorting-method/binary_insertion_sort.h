#ifndef BINARY_INSERTION_SORT_HEADER
#define BINARY_INSERTION_SORT_HEADER

#include "../helper/utils.h"
#include <algorithm>
void binary_insertion_sort(int a[], int n) {
    for (int i = 1; i < n; ++i) {
        int l = std::lower_bound(a, a + i, a[i]) - a;
        //insert a[i] to a[l]
        int cur = a[i];
        for (int r = i - 1; r >= l; --r)
            a[r + 1] = a[r];
        a[l] = cur;
    }
}

#endif