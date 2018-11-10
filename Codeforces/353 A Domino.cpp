#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b,n, xsum = 0, ysum = 0, temp = 0, x;

    cin >> n;
    x = n;
    for(int i=1; i<=n; i++)
    {
        cin >> a >> b;
        xsum  = xsum + a;
        ysum = ysum + b;
        if(a%2 != b%2)
            temp ++;
    }
    if(xsum %2 == 0 && ysum %2 == 0)
        cout << 0 <<endl;
    else if((xsum + ysum) % 2 != 0)
        cout << -1 <<endl;
    else if(temp>0 && x>1) cout <<  1 << endl;
    else cout << -1 <<endl;



    return 0;

}
