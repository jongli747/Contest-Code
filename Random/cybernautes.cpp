#include<bits/stdc++.h>
using namespace std;
int n, sum, summ;
char str[100];
int main()
{
    cin >> n >> str;
    for(int i=0; i<=n-1; i++)
    {
        if(str[i] != '4' && str[i] != '7'){
            cout << "No" << endl;
        return 0;
        }
    }
    for(int i=0; i<=(n/2)-1; i++)
    {
        sum = sum + str[i];
    }
    for(int j = n/2; j <= n-1; j++)
    {
        summ = summ + str[j];
    }
    if(sum != summ)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
    return 0;

}
