#include <bits/stdc++.h>
using namespace std;
#define x 100001
int arr[x];
int main()
{
   long long int n , c,  cnt;

    cin >> n >> c;

    for(long long int i=0; i<n; i++)
    {
        cin >> arr[i];

    }
    for(long long int i=0; i<n; i++)
    {
        if(arr[i]-arr[i-1]<=c)
            cnt++;
        else
            cnt=1;

    }
    cout << cnt ;
    return 0;
}
