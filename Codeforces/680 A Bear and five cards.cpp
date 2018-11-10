#include <bits/stdc++.h>
const int a = 5;
using namespace std;
int main()
{
    int arr[a];
    for(int i=0; i<a; i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+a);
   int  rem = 0;
    for(int i=0; i<a; i++)
    {
        if( i+1 < 5 && arr[i]==arr[i+1])
            rem = max(rem, 2*arr[i]);
        if(i+2 < 5 && arr[i] == arr[i+2])
            rem = max(rem, 3*arr[i]);
    }

    cout << arr[0] + arr[1] +arr[2] + arr[3] + arr[4] - rem << endl;

}

