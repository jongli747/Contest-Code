#include <bits/stdc++.h>
using namespace std;
string rec(int n)
{
    if(n==1) return " hate ";
    else if(n==2) return " that love ";
    else return rec (n--);
}
int main()
{
    int n;
    cin >> n;
    cout << rec(n);

}
