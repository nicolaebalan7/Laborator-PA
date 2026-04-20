#include "quickSort.h"

int main()
{
    int n, a[100];
    cout<<"n=";
    cin>>n;
    citireVector(a, n);
    afisareVector(a, n);
    quickSort1(a, 0, n-1);
    afisareVector(a, n);


    return 0;
}