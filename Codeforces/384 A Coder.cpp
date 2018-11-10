#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;

    int m;
    m = n;

    char arr[m][m];

    double tem = (n * n) /2;


    cout << ceil(tem) << endl;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if((i+j)%2 == 0)
                cout << "C";
            else cout << ".";

        }
        cout << endl;
    }


    return 0;
}
