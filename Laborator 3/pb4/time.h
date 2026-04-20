#pragma once

#include <iostream>
using namespace std;

void mergeSort(int a[], int p, int q, int t[]);
void interclasare(int a[], int p, int q, int m, int t[]);

void quickSort1(int a[], int p, int q);
void quickSort2(int a[], int p, int q);
void partitionare(int a[], int p, int q, int &k);
void interschimba(int &a, int &b);

void citireVector(int a[], int n);
void afisareVector(int a[], int n);