#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, a = 0, d = 0;


    cin >> n;
    char s[n];
    cin >> s;
//    int len = s.size();
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
            a++;
        else if(s[i]=='D')
            d++;
    }
    if(a>d) cout << "Anton" <<endl;
    else if(a<d) cout << "Danik" <<endl;
    else
        cout << "Friendship" <<endl;
}
