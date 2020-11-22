#ifndef BUBBLE_SORT_HEADER
#define BUBBLE_SORT_HEADER

#include "../helper/utils.h"
void bubble_sort(int a[], int n) {
    for (int j = 1; j < n; ++j) 
        for (int i = 1; i < n; ++i)
            if (a[i - 1] > a[i]) 
                swap(a[i - 1], a[i]);
}

void bubble_sort_optimize1(int a[], int n) {
    while(true) {
        bool stop = true;
        for (int i = 1; i < n; ++i)
            if (a[i - 1] > a[i]) 
                swap(a[i - 1], a[i]),
                stop = false;
        if (stop) break;
    }
}

#endif