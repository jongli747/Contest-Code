#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, h,a,c=0;
    while(scanf("%d %d", &n, &h)==2)
    {
        for(int i=0; i<n; i++)
        {
            cin >> a;
            if(a>h)
            {
                c=c+2;
            }
            else
                c=c+1;
        }

        cout << c <<endl;
    }
}
