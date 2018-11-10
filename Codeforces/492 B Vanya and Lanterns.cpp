#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int maxdis =2 * max(arr[0]- 0, l-arr[n-1]);
    for(int i=1; i<n; i++)
    {
        maxdis = max(arr[i]-arr[i-1], maxdis);
    }
 printf("%.10lf", (double)maxdis/2);
}
