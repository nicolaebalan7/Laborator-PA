#include "rucsac.h"

void rucsac1(double w[], double p[], int n, int M, double x[])
{
    int C = 0;
    Obiect o[10];
    for(int i = 0;i < n;i++)
    {
        o[i].w = w[i];
        o[i].p = p[i];
        o[i].r = p[i]/w[i];
        o[i].index = i;
    }

    Sort(o,n);
    for(int i = 0;i < n, C < M; i++)
    {
        if(C + o[i].w <= M)
        {
            x[o[i].index] = 1;
            C += o[i].w;
        }
        else
        {
            x[o[i].index] = (M-C)/o[i].w;
            C = M;
        }
    }
}

void Sort(Obiect o[], int n)
{
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
        {
            if(o[i].r < o[j].r)
            {
                Obiect aux = o[i];
                o[i] = o[i+1];
                o[i+1] = aux;
            }
        }
}