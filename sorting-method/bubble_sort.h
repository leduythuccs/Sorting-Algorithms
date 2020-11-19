#ifndef BUBBLE_SORT_HEADER
#define BUBBLE_SORT_HEADER

#include "../helper/utils.h"
void bubble_sort(int a[], int n) {
    bool stop = true;
    do {
        stop = true;
        for (int i = 1; i < n; ++i)
            if (a[i - 1] > a[i]) 
                swap(a[i - 1], a[i]),
                stop = false;
    } while (!stop);
}

#endif