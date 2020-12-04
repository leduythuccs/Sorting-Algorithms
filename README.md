# Sorting-Algorithms
*Implementation of 12 Sorting Algorithms in C++*

This is my project in the **Data Structures and Algorithms** Course. In this project, I had to implement 12 Sorting Algorithms and write a report about it. You can read the report written in Vietnamese [here](Report-VNM.pdf).

## Implementations
You can find the implementation of Selection Sort, Insertion Sort, Binary-Insertion Sort, Bubble Sort, Shaker Sort, Shell Sort, Heap Sort, Merge Sort, Quick Sort, Counting Sort, Radix Sort, and Flash Sort in the [sorting-methods](sorting-methods) folder. 

There are comments about complexity and notes about my implementations in each file. 

## How to run 

You will need `g++` to compile the `main.cpp` file with the flag `-std=c++17`. My command is: `g++ main.cpp -std=c++17 -o main.exe`

After that, you can run the file `main.exe`. It will run and measure the running time of all algorithms and print it to `output.csv` file.

Because I need to measure the running time of all algorithms but some runs very fast so that I have to use the `boost/chrono` library to measure the running time in nanosecond. If you don't have [boost library](https://www.boost.org/), you can rename the file `std-time.h` to `timer.h`, both file a in the [helper](helper/) folder


## Note
Let's call `n` is the length of the array, `a[i]` is the `i`-th element of the array.
- All codes are written in base-0 indexed.

- All elements are non-negative integers.

- I tested all implementations with `n` is not greater than `300 000` and `a[i]` is not greater than `300 000`.

- Almost all algorithms works well if you increase `n` and `a[i]`, but please take a look at `Flash Sort` and `Counting Sort` if you want to do that. 
    - Please change the size of the array `__L` in Flash Sort and `__cnt` array in Counting Sort. You can use a dynamic array if needed.
    - The reason I don't want to use a dynamic array is it increases the run time of the algorithm. 
- Some notes about the implementation details:
    - `Radix Sort`: Most Significant Digit, base 2.
    - `Quick Sort`: Random Pivot
    - `Merge Sort`: I used [std::inplace_merge](http://www.cplusplus.com/reference/algorithm/inplace_merge/) instead of writing my own merge function.
    - `Binary Insertion Sort`: I use `std::upper_bound`(http://www.cplusplus.com/reference/algorithm/upper_bound/) instead of writing own binary search function

## Credit
You are freely using my code to do whatever you want but if you want to use my code for your report in **Data Structures and Algorithms** Course of HCMUS, you have to credit me. 