#include "quickSort.h"

void quickSort2(int a[], int p, int q)
{
  while(p < q)
  {
    int k;
    partitionare(a, p, q, k);
    if (k-p > q-k)
    {
        quickSort2(a, k+1, q);
        q = k-1;
    }
    else
    {
        quickSort2(a, p, k-1);
        p = k+1;
    }
  }
}

void partitionare(int a[], int p, int q, int &k)
{
    int aux = a[p];
    int i = p+1;
    int j = q;
    while(i <= j)
    {
        if(a[i]  < aux)
            i++;
        if(a[j] > aux)
            j--;
        if(i < j)
        {
            if(a[i] > aux && a[j] < aux)
            {
                interschimba(a[i], a[j]);
                i++;
                j--;
            }
        }
    }
    k = i-1;
    a[p] = a[k];
    a[k] = aux;
}

void interschimba(int &a, int &b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
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
