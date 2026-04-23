#include<iostream>
#include<cstring>
using namespace std;

const int MAX_N = 100;
const int MAX_M = 1000;

int dp[MAX_N][MAX_M];

int maxim(int a, int b)
{
    int max;
    if(a > b)
        max = a;
    else
        max = b;
    return max;
}


int rucsac2(int n, int M, int w[], int p[])
{
    if(n == 0)
        return 0;
    if(M < 0)
        return -100;
    if(dp[n][M] !=- 1)
        return dp[n][M];
    int st = rucsac2(n-1, M, w, p);
    int dr = rucsac2(n-1, M-w[n-1], w, p) + p[n-1];
    dp[n][M] = maxim(st,dr);
    return dp[n][M];
}

int main()
{
    int w[]={3, 5, 6};
    int p[]={10, 30, 20};
    int M=10, n=3;
    memset(dp, -1, sizeof(dp));
    int rez = rucsac2(n, M, w, p);
    cout<<rez;
    return 0;
}

