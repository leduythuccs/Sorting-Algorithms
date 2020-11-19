#ifndef UTILS_HEADER
#define UTILS_HEADER


template <class T>
inline void swap(T& a, T& b) {
    T tmp = b;
    b = a;
    a = tmp;
}

void copy_array(int _from[], int _to[], int n) {
    for (int i = 0; i < n; ++i)
        _to[i] = _from[i];
}

int getRandom(int l, int r) {
    return 1ll * rand() * rand() * rand() % (r - l + 1) + l;
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; ++i)
        std::cout << a[i] << " \n"[i == n - 1];
}

#endif