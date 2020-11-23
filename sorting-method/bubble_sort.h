#ifndef BUBBLE_SORT_HEADER
#define BUBBLE_SORT_HEADER

#include "../helper/utils.h"
void bubble_sort(int a[], int n) {
    for (int j = n; j > 1; --j) 
        for (int i = 1; i < j; ++i)
            if (a[i - 1] > a[i]) 
                swap(a[i - 1], a[i]);
}

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