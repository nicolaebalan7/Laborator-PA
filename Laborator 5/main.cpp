#include <iostream>
#include "LEP.h"

using namespace std;

int main() 
{
    int n;
    cout << "Introduceti n si n valori: ";
    cin >> n;

    int *x = new int[n];
    for (int i = 0; i < n; i++) 
        cin >> x[i];

    Node* cap = LEP(x, n);

    cout << "LEP minima = " << lep(cap, 0) << endl;
    
    delete[] x;

    return 0;
}