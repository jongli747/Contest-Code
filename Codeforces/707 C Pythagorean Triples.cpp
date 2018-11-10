#include <bits/stdc++.h>
using namespace std;
int main()
{
   long  long int  n, k, m;
    cin >> n;
    if(n>2)
    {
        if(n%2==0)
        {
            k = (n*n)/4 - 1;
            m = (n*n)/4 + 1;
        }
        else
            {
                k = ((n*n-1)/2) ;
                m = ((n*n+1)/2) ;
            }
         cout << k  << " " << m << endl;
    }
    else
        cout << -1 << endl;

}
