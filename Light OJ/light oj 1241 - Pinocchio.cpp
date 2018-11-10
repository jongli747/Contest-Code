#include <bits/stdc++.h>

using namespace std;
int arr[11];
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int n;
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> arr[j];

        }
        int cnt = 0;
        for(int j=0; j<n; j++)
        {

            if(j==0 && arr[j] <=2)continue;
            else if(j==0 && arr[j] > 2)
            {
                float temp  = arr[j]/5;

                int temp3 = ceil(temp);
                cnt = cnt + temp3;
            }
            else
            {
                float temp = (arr[j+1] - arr[j])/5;
                int temp3 = ceil(temp);
                cnt = cnt + temp3;
            }

        }
        cout <<"Case "<< i << ": " <<   cnt <<endl;
    }

    return 0;
}
