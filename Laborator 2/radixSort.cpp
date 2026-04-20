#include "radixSort.h"
void radixSort(int L[], int n)
{
    list <int> pachete[10];
    int d = getD(L, n);
    int pow = 1;
    for(int i = 0;i < d;i++)
    {
        //impachetare        
        for(int j = 0;j < n;j++)
        {
            int cifra=(L[j]/pow)%10;
            pachete[cifra].push_back(L[j]);
        }
        //despachetare
        int index = 0;
        for(int j = 0;j < 10;j++)
        {
            for(int numar:pachete[j])
            {
                L[index++] = numar;
            }
            pachete[j].clear();
        }
        pow = pow * 10;
    }
}

int getD(int L[], int n)
{
    int max = L[0];
    int nrCifre = 0;
    for(int i = 1; i<n;i++)
    {
        if(max < L[i])
            max = L[i];
    }
    while(max)
    {
        nrCifre++;
        max = max/10;
    }
    return nrCifre;
}


void citire(int L[], int n)
{   
    for(int i = 0;i < n;i++)
        cin>>L[i];
}

void afisare(int L[], int n)
{
    for(int i = 0;i < n;i++)
        cout<<L[i]<<" ";
    cout<<endl;
}

