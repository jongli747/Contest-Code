#include<stdio.h>
#include<math.h>

int main()

{
    int a, b, c, i, T,borobaal, baal1, baal2;

    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d%d", &a, &b, &c);

        if(a>=1 && a<=40000 && b>=1 && b<=40000 && c>=1 && c<=40000)
        {
            if(a >= b && a >= c)
            {
                borobaal = a;
                baal1 = b;
                baal2 = c;
            }
            else if(b >= a && b >= c)
            {
                borobaal = b;
                baal1 = a;
                baal2 = c;
            }
            else if(c >= a && c >= b)
            {
                borobaal = c;
                baal1 = a;
                baal2 = b;
            }

            if(borobaal * borobaal == (baal1 * baal1)+ (baal2 * baal2))
            {
                printf("Case %d: yes\n", i);
            }
            else
                printf("Case %d: no\n", i);

        }
    }


    return 0;
}
