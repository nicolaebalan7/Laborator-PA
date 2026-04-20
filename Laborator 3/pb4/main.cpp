#include "time.h"
#include <chrono>
#include <cstdlib>

void ruleazaPentruN(int n)
{
    int *a = new int[n];
    for(int i = 0; i < n; i++) a[i] = rand();

    int *a1 = new int[n];
    int *a2 = new int[n];
    int *a3 = new int[n];
    int *t  = new int[n];
    for(int i = 0; i < n; i++) a1[i] = a2[i] = a3[i] = a[i];

    // MergeSort
    auto start = std::chrono::high_resolution_clock::now();
    mergeSort(a1, 0, n-1, t);
    auto end = std::chrono::high_resolution_clock::now();
    auto us = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    cout << "MergeSort  : " << us.count() << "us (" << us.count()/1000.0f << "ms)" << endl;

    // QuickSort1
    start = std::chrono::high_resolution_clock::now();
    quickSort1(a2, 0, n-1);
    end = std::chrono::high_resolution_clock::now();
    us = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    cout << "QuickSort1 : " << us.count() << "us (" << us.count()/1000.0f << "ms)" << endl;

    // QuickSort2
    start = std::chrono::high_resolution_clock::now();
    quickSort2(a3, 0, n-1);
    end = std::chrono::high_resolution_clock::now();
    us = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    cout << "QuickSort2 : " << us.count() << "us (" << us.count()/1000.0f << "ms)" << endl;

    delete[] a; delete[] a1; delete[] a2; delete[] a3; delete[] t;
}

int main()
{
    int dimensiuni[] = {10000, 100000, 500000, 1000000, 5000000, 10000000};

    for(int i = 0; i <6; i++)
        ruleazaPentruN(dimensiuni[i]);

    return 0;
}