#include <time.h>

#include <cmath>
#include <fstream>
#include <iostream>
template <class T>
void HoanVi(T &a, T &b) {
    T x = a;
    a = b;
    b = x;
}

//-------------------------------------------------

// Hàm phát sinh mảng dữ liệu ngẫu nhiên
void GenerateRandomData(int a[], int n) {
    srand((unsigned int)time(NULL));

    for (int i = 0; i < n; i++) {
        a[i] = rand() % n;
    }
}

// Hàm phát sinh mảng dữ liệu có thứ tự tăng dần
void GenerateSortedData(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }
}

// Hàm phát sinh mảng dữ liệu có thứ tự ngược (giảm dần)
void GenerateReverseData(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = n - 1 - i;
    }
}

// Hàm phát sinh mảng dữ liệu gần như có thứ tự
void GenerateNearlySortedData(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 10; i++) {
        int r1 = rand() % n;
        int r2 = rand() % n;
        HoanVi(a[r1], a[r2]);
    }
}
enum DataType {
    RANDOM_DATA,
    SORTED_DATA,
    REVERSE_DATA,
    NEARLY_SORTED_DATA
};
void GenerateData(int a[], int n, DataType typ) {
    switch (typ) {
        case RANDOM_DATA:  // ngẫu nhiên
            GenerateRandomData(a, n);
            break;
        case SORTED_DATA:  // có thứ tự
            GenerateSortedData(a, n);
            break;
        case REVERSE_DATA:  // có thứ tự ngược
            GenerateReverseData(a, n);
            break;
        case NEARLY_SORTED_DATA:  // gần như có thứ tự
            GenerateNearlySortedData(a, n);
            break;
        default:
            printf("Error: unknown data type!\n");
    }
}