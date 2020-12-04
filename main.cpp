#include <stdio.h>

#include <algorithm>
#include <cassert>
#include <iostream>
#include <string>

#include "helper/DataGenerator.cpp"
#include "helper/timer.h"
#include "sorting-methods/all.h"

typedef void (*sort_ptr)(int[], int);
sort_ptr sort_methods[] = {
    selection_sort, selection_sort_optimize1, insertion_sort,
    binary_insertion_sort, bubble_sort, bubble_sort_optimize1,
    shaker_sort, shaker_sort_optimize1, shell_sort,
    heap_sort, merge_sort, quick_sort,
    couting_sort, radix_sort, flash_sort};
std::string sort_names[] = {
    "selection_sort", "selection_sort_optimize1", "insertion_sort",
    "binary_insertion_sort", "bubble_sort", "bubble_sort_optimize1",
    "shaker_sort", "shaker_sort_optimize1", "shell_sort",
    "heap_sort", "merge_sort", "quick_sort",
    "couting_sort", "radix_sort", "flash_sort"};

int dataSizes[] = {3000, 10000, 30000, 100000, 300000};
int a[300000], b[300000], c[300000];
// int dataSizes[] = {3000, 10000};

// RANDOM_DATA 0
// SORTED_DATA 1
// REVERSE_DATA 2
// NEARLY_SORTED_DATA 3
std::string get_name_data_type(int data_type) {
    if (data_type == RANDOM_DATA)
        return "Random";
    if (data_type == SORTED_DATA)
        return "Sorted";
    if (data_type == NEARLY_SORTED_DATA)
        return "Nearly sorted";
    return "Reverse";
}
#define TESTING
int main() {
    freopen("output.csv", "w", stdout);
    Timer timer;
    Timer whole;
    whole.start();
    int n_sorts = sizeof(sort_methods) / sizeof(sort_methods[0]);

    for (int data_type = 0; data_type < 4; ++data_type) {
        for (auto n : dataSizes) {
            std::cerr << "n = " << n << '\n';
            GenerateData(a, n, data_type);
#ifdef TESTING
            copy_array(a, b, n);
            std::sort(b, b + n);
#endif
            for (int i = 0; i < n_sorts; ++i) {
                std::cerr << "doing " << sort_names[i] << '\n';
                copy_array(a, c, n);
                timer.start();
                sort_methods[i](c, n);
                int64_t running_time = timer.getRunningTime();
                std::cout << get_name_data_type(data_type) << ',' << n << ',' << sort_names[i] << ',' << running_time << '\n';
#ifdef TESTING
                for (int i = 0; i < n; ++i)
                    assert(c[i] == b[i]);
#endif
            }
        }
    }
    int64_t running_time = whole.getRunningTime();
    std::cerr << "Finished in " << running_time / 1000000.0 << " miliseconds\n";
    std::cerr << "Finished in " << running_time / 1000000000.0 << " seconds";
    return 0;
}