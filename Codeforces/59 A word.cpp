#include <bits/stdc++.h>
#define READ(f) freopen(f, "r", stdin)

#define phl printf ( "hello\n" )
using namespace std;

int main()
{
    READ("in.txt");

    int up = 0, low = 0;

    string s;
    cin >> s;
    int len = s.size();
    for(int i=0; i<len; i++)
    {
        if(s[i] >= 'A' && s[i] <='Z')
            up++;
        else if(s[i] >= 'a' && s[i] <='z')
            low++;
    }
    if(up > low)
    {
        for(int i=0; i<len; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
        }
        cout << s << endl;

    }
    else
    {
        for(int i=0; i<len; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 32;
        }
        cout << s << endl;
    }

    return 0;
}
