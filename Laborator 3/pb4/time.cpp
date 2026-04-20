#include "time.h"

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

void quickSort1(int a[], int p, int q)
{
    if(p < q)
    {
        int k;
        partitionare(a, p, q, k);
        quickSort1(a, p, k-1);
        quickSort1(a, k+1, q);
    }
}

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
        if(a[i] <= aux) i++;
        else if(a[j] >= aux) j--; 
        else if(i < j)
        {
            interschimba(a[i], a[j]);
            i++;
            j--;
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
    for(int i = 0;i < n;i++)
        cin>>a[i];
    
}

void afisareVector(int a[], int n)
{
    for(int i = 0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

