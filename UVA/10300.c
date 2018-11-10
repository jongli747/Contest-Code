#include<stdio.h>

int main()

{
    int t,n,f_b,f_a,f_c,i,j,ans,ans1 ;

    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d", &n);

            for(j=1; j<=n; j++)
            {
                scanf("%d%d%d", &f_a, &f_b, &f_c);
                ans += f_a * f_c;
            }

            printf("%d\n", ans);
            ans = 0;

        }
    }
    return 0;
}
