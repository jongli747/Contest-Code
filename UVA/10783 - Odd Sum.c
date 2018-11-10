#include<stdio.h>

int main()

{
    int c, a, b, t, i;

    scanf("%d", &t);

    for(c=1; c<=t; c++)

    {
        int sum = 0;
        scanf("%d%d", &a, &b);

        for(i=a; i<=b; i++)
        {

            if(i % 2 != 0)
            {
                sum+=i;
            }
            else
                continue;

        }
         printf("case %d: %d\n", c, sum);

    }

    return 0;


}
