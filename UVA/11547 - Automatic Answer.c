#include<stdio.h>

int main()

{
    int t,n,i,a,b,c,x,y,ans1;

    scanf("%d", &t);

    for(i=1; i<=t; i++){

        scanf("%d", &n);

        a = (n*567)/9;

        b = (a+7492)*235;

        c = (b/47)-498;

        ans1 = (c/10)%10;
        if (ans1<0)
            ans1 = ans1/(-1);

        printf("%d\n", ans1);

    }

    return 0;
}
