#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int max1, min1, max2, min2;
    max1 = max(x1, x2);
    max2 = max(max1, x3);

    min1 = min(x1, x2);
    min2 = min(min1, x3);
    cout <<max2-min2 << endl;
}
