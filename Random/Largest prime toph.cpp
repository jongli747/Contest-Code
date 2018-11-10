#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q, c=0;
    cin>> q;
    while (q--)
    {
        int x, y,np=-1;

        cin >> x >> y;

        int p = 2;
        for(int i=x; i<=y; i++)
        {
           // c++;
            bool prime = true ;
            for(int j=2; j<=sqrt(i); j++)
            {
                if(i%j==0)
                {
                    prime = false;
                }
            }
            if(prime == true)
            {
                p = max(p, i);
            }
            else
                np = min(np, -1);
        }
        int result = max(p, np);
        cout << result << endl;

    }
}
