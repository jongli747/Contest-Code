#include <stdio.h>

int mod(long  a, long  x, long  m)
{
    if(x==0)
        return 1;
    if(x%2==0)
        return (mod(a,x/2,m)*mod(a,x/2,m))%m;
    return (mod(a,x-1,m)*(a%m))%m;
}
int main()
{
    int a,x,m;
    while(scanf("%d %d %d",&a,&x,&m)==3){
        printf("%ld\n",mod(a,x,m));
    }
    return 0;
}
