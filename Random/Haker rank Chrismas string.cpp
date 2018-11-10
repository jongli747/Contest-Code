#include <bits/stdc++.h>

using namespace std;
int main()
{
    string  s, temps;
    int len, len2;
    cin >> s;
    int n;
    cin >> n;
    len = s.length();
    int cnt = 0;
    for(int k=1; k<=n; k++)
    {
        int match = 0, star = 0;
        cin >> temps;
        len2 = temps.length();
        for(int i=0; i<len; i++)
        {
            for(int j=0; j<len2; j++)
            {
                if(s[i]==temps[j])
                {
                    match++;
                }
                else
                {
                    if(s[i] != temps[j])
                    {
                        if(s[i]=='*')
                            star++;
                    }
                }
            }
        }
        if(match + star == len)
            cnt++;
    }
    cout << cnt << endl;


}
