#include <bits/stdc++.h>
using namespace std;
int arr3[100001];
int main()
{
    int n, k;

    cin >> n >> k;
    int arr[n], arr2[k];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    arr2[0] = arr[0];
    arr2[1] = arr[0];
    arr2[2] = arr[1];
   // for(int i=0; i<n-1; i++)
        cout << " " << arr2[0] << arr2[1] << arr2[2];


    return 0;
}
