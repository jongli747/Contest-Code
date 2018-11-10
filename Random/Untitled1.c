#include<stdio.h>
int main()
{
   int a, b, i,sum=0,t;
   scanf("%d", &t);
   for(i=0; i<t; i++)
   {
       scanf("%d%d", &a, &b);
       int j;
       for(j=1; j<=b; j++)
       {
           sum = sum +a;
            printf("%d",sum);
       }

   }

}
