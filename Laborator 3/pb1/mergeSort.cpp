#include "mergeSort.h"

void mergeSort(int a[], int p, int q, int t[])
{
    if(p<q)
    {
        int m = (p+q)/2;
        mergeSort(a, p, m, t);
        mergeSort(a, m+1, q, t);
        interclasare(a, p, q, m, t);
        for(int i = p;i <= q;i++)
            a[i] = t[i-p];
    }
}

void interclasare(int a[], int p, int q, int m, int t[])
{
    int i = p, j = m+1, k = 0;
    while(i <= m && j <= q)
    {
        if(a[i] < a[j])
            t[k++] = a[i++];
        else
            t[k++] = a[j++];
    }
    while(i <= m)
        t[k++] = a[i++];
    while(j <= q)
        t[k++] = a[j++];
}

void citireVector(int a[], int n)
{
    for(int i = 0;i < n;i++)
        cin>>a[i];
    
}

void afisareVector(int a[], int n)
{
    for(int i = 0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

