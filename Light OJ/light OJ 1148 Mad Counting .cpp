#include <bits/stdc++.h>
using namespace std;
int x = 51;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int n, y, ans;
        cin >> n;
        int sum = 0;
        while(n--)
        {
            cin >> y;
            sum = sum + y;
        }
        ans = sum - (sum/n);
        cout << ans << endl;
    }
}
