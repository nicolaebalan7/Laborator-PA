#include"radixSort.h"


int main()
{
    int L[100], n;
    cout<<"n= ";
    cin>>n;
    citire(L, n);
    afisare(L, n);
    cout<<getD(L, n)<<endl;
    radixSort(L,n);
    afisare(L,n);
    return 0;
}