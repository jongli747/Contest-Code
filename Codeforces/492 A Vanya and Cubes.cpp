#include <bits/stdc++.h>
using namespace std;
int arr[10001];
int main()
{
    int n;
    arr[1] = 1;
    for(int j=2; j<=10001; j++)
    {
        arr[j] = j+ arr[j-1];
    }
    int sum = 0, temp = 0, i;
    cin >> n;
    for(i=1; i<=10001; i++)
    {
        sum = sum + arr[i];
        if(sum + arr[i+1] > n)
            break;

    }
    cout << i;
}
