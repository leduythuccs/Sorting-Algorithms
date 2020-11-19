#ifndef SELECTION_SORT_HEADER
#define SELECTION_SORT_HEADER

#include "../helper/utils.h"

void selection_sort(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int cur_min = i;
        for (int j = i + 1; j < n; ++j)
            if (a[cur_min] > a[j])
                cur_min = j;
        swap(a[cur_min], a[i]);
    }
}

#endif