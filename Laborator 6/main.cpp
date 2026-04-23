#include"rucsac.h"

int main()
{
    int n=3, M=3;
    double p[] = {2, 4, 5};
    double w[] = {2, 1, 2.5};
    double x[n];
    rucsac1(w, p, n, M, x);
    int val = 0;
    for(int i = 0;i < n;i++)
    {
        val += p[i]*x[i];
    }
    cout<<val<<endl;
    for(int i = 0; i < n; i++)
    {
        cout << "x[i]= " << x[i] << endl;
    }
    return 0;
}