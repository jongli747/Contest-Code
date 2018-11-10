#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    int m, sm = 0, i, k = 0 , sum = 0;
    cin >> n >> m;
    int s = 240;
    for(i=1; i<=n; i++)
    {
        sum = sum + i*5;
        if(sum + m <= 240)
            k = i;

    }

    cout << k << endl;
}
