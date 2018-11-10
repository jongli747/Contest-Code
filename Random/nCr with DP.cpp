#include<bits/stdc++.h>
using namespace std;
long long dp[70][70];
long long nCr(int n, int r)
{
    if(r==1) return n;
    if(n==r) return 1;
    if(dp[n][r]!=-1) return dp[n][r];
    else
    {
        dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
        return dp[n][r];
    }
}
int main()
{
    int n, r;
    cin >> n >> r;
    for(int i=0; i<70; i++)
        for(int j=0; j<70; j++)
        dp[i][j]=-1;
    cout << nCr(n,r) << endl;



    return 0;

}
