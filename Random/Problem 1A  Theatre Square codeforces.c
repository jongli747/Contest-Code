
#include<stdio.h>
#include <bits/stdc++.h>

using namespace std ;

int main()

{
     long long  n, m, a, x = 0, y = 0;

	cin >> n >> m >> a ;
    //scanf("%d%d%d", &n, &m, &a);

    x+=n/a;

    if(n%a>0)
        x++;

    y += m / a;

    if(m % a > 0)
        y++;

	cout << x * y<< endl ;
    //printf("%d", x * y);

    return 0;

}
