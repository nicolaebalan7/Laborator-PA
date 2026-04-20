#include "mergeSort.h"


int main()
{
    int a[100], aux[100], n;
    cout<<"n=";
    cin>>n;
    citireVector(a, n);
    afisareVector(a, n);
    mergeSort(a, 0, n-1, aux);
    afisareVector(a, n);

    return 0;
}