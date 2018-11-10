
#include <bits/stdc++.h>
using namespace std;
int arr[1000001];
int main()
{
    int n, n1, n2, last = 0;
    cin >> n >> n1 >> n2;
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    reverse(arr,arr+n);

    int a = min(n1,n2);
    int b = max(n1,n2);
    double sum1 = 0.0, sum2 = 0.0;
    for(int i=0; i<a; i++)
    {
        sum1 += arr[i];
    }
    for(int i =a ; i<(n1+n2); i++)
    {
        sum2 += arr[i];
    }
    double ans = (double)sum1/a + (double)sum2/b;
    printf("%.8lf", ans);

    return 0;
}
