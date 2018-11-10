#include<stdio.h>
//#define length 3
int main()
{
    int x, y, z, n, i, t;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d%d", &x, &y, &z, &n);

        if(x-y == y-z)
        printf("Case %d: %d\n", i, n);
    else
        printf("Case %d: error\n", i);



    }





}
