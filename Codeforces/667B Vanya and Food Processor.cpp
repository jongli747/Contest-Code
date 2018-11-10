#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, k, a,c = 0;

    while(scanf("%d %d %d", &n, &h, &k)==3)
    {
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i] <= k)
            {
                c = c+1;
            }
            else
                c = c+2;


        }
        cout << c << endl;
    }

}
