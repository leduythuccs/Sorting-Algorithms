#ifndef COUTING_SORT_HEADER
#define COUTING_SORT_HEADER

#include "../helper/utils.h"
int __cnt[300000];
void couting_sort(int a[], int n) {
    if (n <= 0) return;
    for (int i = 0; i < n; ++i)
        ++__cnt[a[i]];
    int l = 0;
    for (int i = 0; i < n; ++i)
        for (; __cnt[i]; --__cnt[i], ++l)
            a[l] = i;
}

#endif