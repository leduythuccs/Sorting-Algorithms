#ifndef UTILS_HEADER
#define UTILS_HEADER


template <class T>
inline void swap(T& a, T& b) {
    T tmp = b;
    b = a;
    a = tmp;
}
int getRandom(int l, int r) {
    return 1ll * rand() * rand() * rand() % (r - l + 1) + l;
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; ++i)
        std::cout << a[i] << " \n"[i == n - 1];
}

#endif