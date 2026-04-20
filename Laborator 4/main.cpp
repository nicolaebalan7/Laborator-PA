#include "batcherSort.h"
#include <iostream>
#include <chrono>
#include <algorithm>
using namespace std;

void measureSort(int a[], int n, const string& caseName)
{
    auto start = std::chrono::high_resolution_clock::now();
    batcherSort(a, 0, n, 0);
    auto end = std::chrono::high_resolution_clock::now();

    auto duration = (end - start);
    auto us = std::chrono::duration_cast<std::chrono::microseconds>(duration);
    const float ms_fractional = static_cast<float>(us.count()) / 1000;
    cout << caseName << ": " << us.count() << "μs (" << ms_fractional << "ms)" << endl;
}

int main()
{
    int n = 1048576; 
    int *a = new int[n];

    for(int i = 0; i < n; i++) a[i] = i;
    measureSort(a, n, "Deja sortate crescator");

    for(int i = 0; i < n; i++) a[i] = n - i;
    measureSort(a, n, "Sortate descrescator");

    for(int i = 0; i < n; i++) a[i] = rand();
    measureSort(a, n, "Distribuite aleator");

    delete[] a;
    return 0;
}