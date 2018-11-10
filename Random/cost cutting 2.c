#include<stdio.h>

int main()

{
    int t, i, a, b, c, r;

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        if(a > b && a > c)
        {
            if(b>c)
                r = b;
            else
                r = c;
            }
        else if(b > a && b > c)
        {
            if(a > c)
                r = a;
            else
                r = c;
        }
        else if(c > b && c > a)
        {
            if(b > a)
                r = b;
            else
                r = a;
        }
            printf("Case %d: %d\n", i, r);


    }
    return 0;
}
