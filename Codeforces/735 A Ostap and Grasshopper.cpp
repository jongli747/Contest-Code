#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, flag = 0, flag1  = 0, flag2 = 0;
    cin >> n >> k;
    int g = 0, t = 0;
    char c[n+1];
    for(int i=1; i<=n; i++)
        {
            cin >> c[i];
            if(c[i] == 'G')
                g = i;
            else if(c[i]== 'T')
                t = i;
        }
         if(abs(g-t) < k)
        {
            cout << "NO";
            return 0;
        }

    if(g>t)
    {

        for(int i=g; i>=t; i= i-k)
        {
          if(c[i] == '#')
           {
               cout << "NO";
               return 0;
               //break;
           }
        }
    }
    else
    {
        for(int i=g; i<=t; i= i+k)
        {

           if(c[i] == '#')
           {
               cout << "NO";
               return 0;
           }
        }
    }
    if(g>t)
    {
        if((g-t)%k==0) cout << "YES";
        else
            cout << "NO";
    }
    else
    {
        if((t-g) % k == 0) cout << "YES";
        else cout << "NO";
    }
    return 0;
}
