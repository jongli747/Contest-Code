#include <bits/stdc++.h>
using namespace std;
#define N 1000
char arr[N][5];
int main()
{
    int n, c = 0, d = 0;
    cin >> n;
    //char arr[n][5];
    int i, j;
    for( i=0; i<n; i++)
        for( j=0; j<5; j++)
        {
            cin >> arr[i][j];
            d++;
        }
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            if((arr[i][0]=='O' && arr[i][1]=='O') || (arr[i][3]=='O' && arr[i][4]=='O'))
            {
                c =1;
                if(arr[i][0]=='O' && arr[i][1]=='O') arr[i][0]=arr[i][1]='+';
                else arr[i][3]=arr[i][4]='+';
                break;

            }

        }
        if(c==1) break;
    }
    if(c==1)
    {
        cout << "YES" <<endl;
        for(i=0; i<n; i++)
        {
            for(j=0; j<5; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }

    }
    else cout << "NO" <<endl;
    // cout << d;
    return 0;

}
