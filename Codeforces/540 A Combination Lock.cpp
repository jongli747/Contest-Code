#include <bits/stdc++.h>


using namespace std;
int main()
{
    int n, sum = 0, k = 0;
    string s1, s2;
freopen("in.txt", "r", stdin);
    cin >> n;
    cin >> s1;
    cin >> s2;
    for(int i=0; i<n; i++)
    {
        k = abs(s1[i]-s2[i]);
        sum = sum + min(k,10-k);
    }
    cout << sum << endl;



    return 0;
}
