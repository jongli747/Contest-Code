#include<stdio.h>

int main()

{
    int t,n,f_l,f_a,f_e,i,j,ans;

    scanf("%d", &t);

    for(i=1; i<=t; i++){


        scanf("%d", &n);

    for(j=1; j<=n; j++)

        scanf("%d%d%d", &f_l, &f_a, &f_e);

         ans += f_l * f_e;

         printf("%d\n", ans);
    }

    return 0;
}
