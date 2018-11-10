#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, start = 0, en = 0;

    cin >> n >> a >> b;

    string s;

    cin >> s;
    start = s[a-1];
    en = s[b-1];
    if(start == en)
    {
        cout << 0;
        return 0;
    }
    int result = 0;
    if(a < b)
    {
        for(int i=a-1; i<=b-1; i++)
        {
            if(s[i]==en)
            {
                result = abs(s[i]-s[a-1]);
                    break;
            }

        }

    }
    else
    {
        for(int i=a-1; i>=b-1; i--)
        {
            if(s[i]==en)
            {
                result = abs(s[i] - s[a-1]);
                break;
            }
        }
    }

    cout << result  << endl;




//    if(a < b)
//    {
//        for(int i=a; i<=b; i++)
//    }

    return 0;
}
