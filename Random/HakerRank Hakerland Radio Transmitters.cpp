#include <bits/stdc++.h>
using namespace std;
#define x 100001
int c = 0;
int main()
{
    int arr[x], k, n;

    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int temp = 0;
    for(int i = arr[0]; i<=arr[n-1]; i++)
    {

        if(c==k)
        {
            temp++;
            i = i+k;
            c = 0;
        }
        c++;
    }
    cout << temp;
}
