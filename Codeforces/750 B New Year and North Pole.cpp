#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

   int dis = 0;
   int x;
   string s;

    for(int i=0; i<n; i++)
    {

        cin >> x >> s;
        if(dis==0)// north pole
        {
            if(s!="South")
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        if(dis==20000)//south pole
        {
            if(s!="North")
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        if(s=="South")
            dis = dis + x;
        if(s=="North")
            dis-=x;
        if(dis>20000 || dis<0)
        {
            cout << "NO" << endl;
            return 0;
        }

    }
    if(dis!=0) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}
