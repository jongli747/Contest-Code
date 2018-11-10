#include<stdio.h>
long baal(int);

int main()
{
    //int n;
    long  a;
    int n,num;
   while(scanf("%d", &n)==1){;
    if(n>=8 && n<=13)
        printf("%ld\n",baal(n));
    else
    {
        if(n>= 14)
            printf("Overflow!\n");
        else if(n>=0 && n<=7)
            printf("Underflow!\n");
    }
   }


}
long  baal(int n)
{
    if(n==0) return 1;
    //else if(n==1) return 1;
    else
       return (n * baal(n-1));
}
