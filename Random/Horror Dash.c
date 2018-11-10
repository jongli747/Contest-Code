#include<stdio.h>
int main()
{
    int T,f,i;
    long int c,max,j,N;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        max = 0;
        scanf("%d", &N);
        for(j=1; j<=N; j++)
        {
            scanf("%ld", &c);

            if(c > max)
                max = c;


        }

         printf("Case %d: %ld\n",i,max);
    }
    return 0;

}
