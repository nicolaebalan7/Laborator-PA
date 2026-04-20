#include "matrice.h"
#include<iostream>
using namespace std;

void rotireMatrice(char** matrice, int n)
{
    for(int i=0;i<n;i++)
        for(int j=i + 1;j < n;j++)
        {
            char aux=matrice[i][j];
            matrice[i][j]=matrice[j][i];
            matrice[j][i]=aux;
        }
    for(int i=0;i<n;i++)
        for(int j=i+1;j < n;j++)
        {
            char aux=matrice[i][j];
            matrice[i][j]=matrice[n-1-i][j];
            matrice[n-i-1][j]=aux;
        }
}

void citire(char **matrice, int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>matrice[i][j];
}

void afisare(char **matrice, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<matrice[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}