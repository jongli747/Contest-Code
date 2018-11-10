#include<stdio.h>
#define k 10002
int main()
{
    int n, r, i;
    int  a;

    for(i=1; i<=k; i++){
        scanf("%d %d", &r, &n);
        if((r==0 && n==0))
            break;

        a = (r-1)/n;
        if(a > 26){
            printf("Case %d: impossible\n", i);
        }
        else
            printf("Case %d: %d\n", i, a);
    }
    return 0;


}
