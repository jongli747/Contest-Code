#include<stdio.h>

int main()

{
    int T, N, i, j, baal[10] = {0,1,2,3,4,5,6,7,8,9};
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%d", &N);
        for(j=1; j<=N; j++)
        {
            if(j!=0)
                printf(" ");
            else
                printf("%d \n", baal[j]);


        }
    }
}
