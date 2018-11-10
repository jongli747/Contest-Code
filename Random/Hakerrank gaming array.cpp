#include <bits/stdc++.h>
int arr[100001];
using namespace std;
int main()
{
    int g;
    cin >> g;
    for(int k=1; k<=g; k++)
    {
        int n;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int c= 0, last = n-1, first = 0;
        while(last>=0)
        {
            int temp = 0,  m = 0;
            for(int i=0; i<=last; i++)
            {

                if(arr[i] > m)
                {
                    m = arr[i];
                    temp = i;
                }

            }
            c ++;
            last = temp-1;



        }
    //cout << c << endl;
        if(c%2==0) cout << "ANDY" << endl;
        else cout << "BOB" << endl;
    }
    return 0;
}
