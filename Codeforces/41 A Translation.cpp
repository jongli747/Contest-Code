#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t, temp;
    int slen, tlen, k = 0;
    cin >> s;
    cin  >> t;
    slen = s.length();
    tlen = t.length();

    if(slen != tlen)
        cout << "NO";
    else
    {
        int temp2 = tlen-1;
        for(int i=0; i < slen; i++)
        {
            if(s[i]==t[temp2])
                k++;
            temp2 = temp2 - 1;
        }
        if(k==slen)
            cout << "YES" <<endl;
        else
            cout << "NO" <<endl;
    }
    return 0;
}
