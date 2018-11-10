#include <bits/stdc++.h>
using namespace std;
int arr[31];
int main()
{
    int t, j;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int n, p, q;
        cin >> n >> p >> q;
        for(j=0; j<n; j++)
            cin >> arr[j];
        int sum = 0, cnt = 0;
        for(j=0; j<n; j++)
        {
            if(cnt >= p) break;
            else
            {
                if(sum + arr[j] > q) break;
                else
                {
                    sum = sum + arr[j];
                    cnt = cnt + 1;
                }
            }
        }
        cout << "Case " << i << ": "  << cnt << endl;

    }

    return 0;
}
