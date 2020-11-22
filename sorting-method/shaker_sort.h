#ifndef SHAKER_SORT_HEADER
#define SHAKER_SORT_HEADER

#include "../helper/utils.h"
void shaker_sort(int a[], int n) {
    int L = 0, R = n - 1;
    while (L < R) {
        for (int i = L; i < R; ++i)
            if (a[i] > a[i + 1])
                swap(a[i], a[i + 1]);
        --R;
        for (int i = R - 1; i >= L; --i)
            if (a[i] > a[i + 1])
                swap(a[i], a[i + 1]);
        ++L;
    }
}

void shaker_sort_optimize1(int a[], int n) {
    bool stop = true;
    int L = 0, R = n - 1;
    while (L < R) {
        stop = true;
        for (int i = L; i < R; ++i)
            if (a[i] > a[i + 1])
                swap(a[i], a[i + 1]), 
                stop = false;
        if (stop) break;
        --R;
        stop = true;
        for (int i = R - 1; i >= L; --i)
            if (a[i] > a[i + 1])
                swap(a[i], a[i + 1]),
                stop = false;
        if (stop) break;
        ++L;
    }
}
#endif