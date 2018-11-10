#include <bits/stdc++.h>
using namespace std;
int arr[101];
int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        char a;
        int n , m;
        cin >> n >> m;

        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int k=1; k<=m; k++){

        cin >> a;
        switch(a)
        {
        case 'S':
            int d;
            cin >> d;
            for(int i=0; i<n; i++)
                arr[i] = arr[i] + d;
            break;
        case 'M':
            int l;
            cin >> l;
            for(int i=0; i<n; i++)
                arr[i] = arr[i] * l;
            break;
        case 'D':
            int k;
            cin >> k;
            for(int i=0; i<n; i++)
                arr[i] = arr[i] / k;
            break;

        case 'P':
            int y, z;
            cin >> y >> z;
            swap(arr[y], arr[z]);
            break;

        case 'R':
            int j, temp = 0;
            for(int i=0, j= n-1; i<n/2; i++, j--)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            break;

        }

        }



        cout << "Case "<< i << ":" << endl;
        for(int i=0; i<n; i++)
            if(i == n-1)
                cout << arr[i];
            else
                cout << arr[i] << " ";
            cout << endl;
    }
}
