#include"matrice.h"
#include<iostream>
using namespace std;

int main()  
{

    char** matr;
    int n;
    cin>>n;
    matr=new char*[n];
    for(int i=0;i<n;i++)
        matr[i]=new char[n];
     
    citire(matr, n);
    afisare(matr,n);
    rotireMatrice(matr, n);
    afisare(matr,n);

    
    return 0;
}