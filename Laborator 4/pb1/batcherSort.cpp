#include "batcherSort.h"

void batcherSort(int a[], int i, int d, int s)
{
    if(d == 2)
    {
        compara_si_schimba(a[i], a[i+1], s);
    }
    else
    {
        batcherSort(a, i, d/2, 0);
        batcherSort(a, i+d/2, d/2, 1);
        secventaBitona(a, i, d, s);
    }
}

void secventaBitona(int a[], int i, int d, int s)
{
    if(d == 2)
    {
        compara_si_schimba(a[i], a[i+1], s);
    }
    else
    {
        for(int j = i; j < d/2;j++)
        {
            compara_si_schimba(a[j], a[j+d/2], s);
        }
        secventaBitona(a, i, d/2, s);
        secventaBitona(a, i+d/2, d/2, s);
    }
}

// ✅ Corect
void compara_si_schimba(int &a, int &b, int s)
{
    if((s == 0 && a > b) || (s == 1 && a < b))
    {
        int aux = a;
        a = b;
        b = aux;
    }
}

void citireVector(int a[], int n)
{
    for(int i=0; i<n;i++)
        cin>>a[i];
}

void afisareVector(int a[], int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}