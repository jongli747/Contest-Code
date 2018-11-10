#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define MAX_N 100
#define MAX_W 1000
int n;
int dp[MAX_N+1][MAX_W+1];
int weight[MAX_N+1];
int cost [MAX_N+1];
int cap;
int func(int i, int w)
{
    if(i==n+1) return 0;

    if(dp[i][w]!= -1)
        return dp[i][w];

    int profit1=0, profit2 = 0;

    if(w+weight[i] <= cap)
        profit1 = cost[i] + func(i+1,w+weight[i]);

    profit2 = func(i+1,w);
    dp[i][w] =max(profit1,profit2);
    return dp[i][w];
}

int main()
{
    memset(dp,-1,sizeof(dp));
    cin >> n >> cap;
    for(int i=1; i<=n; i++)
    {
        cin >> weight[i] >> cost[i];
    }
    cout << func(1,0);
}
