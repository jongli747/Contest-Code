#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        sum = sum + x;

    }
    int c = 0;
    int  i;
    for(i=1; i<=sum; i++)
    {
        if(i%4==0)
            c++;
    }
    if(sum%4!=0)
        c++;

    cout << c;
}
