
#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("in.txt", "r", stdin);
    string s;
    cin >> s;

    int len = s.size();
    if(len < 26 || len > 26)
        cout << -1 << endl

    else
    {
        for(int i=1; i<=len; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
                continue;
            else
                s[i] =
        }
        cout << s << endl;

    }


}
