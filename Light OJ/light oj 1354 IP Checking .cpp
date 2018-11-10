#include <bits/stdc++.h>
using namespace std;
int binary(int n)
{
    int rem, i =1, b = 0;
    while (n!=0)
    {
        rem = n%2;
        n = n/2;
        b = b + rem * i;
        i = i * 10;
    }
    return b;
}
int main()
{
    //freopen("in.txt", "r", stdin);
    int a, b, c, d, e, f, g, h, e1, f1, g1, h1;
    int test;
    cin >> test;
    for(int k=1; k<=test; k++)
    {
        scanf("%d. %d. %d. %d", &a, &b, &c, &d);

        e = binary(a);
        f = binary(b);
        g = binary(c);
        h = binary(d);

       scanf("%d. %d. %d. %d", &e1, &f1, &g1, &h1);


        if(e==e1 && f==f1 && g==g1 && h==h1)
            cout << "Case " << k << ": " << "Yes" << endl;
        else
            cout << "Case " << k << ": " << "No" << endl;
    }

}
