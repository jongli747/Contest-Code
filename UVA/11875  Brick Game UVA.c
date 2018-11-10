#include<stdio.h>
#define p 11
int main()
{
    int T, a[p], N, i, j, k=0;
    scanf("%d", &T);
    for(i=1; i<=T; i++){
        scanf("%d", &N);

        for(j=0; j<N; j++){
                scanf("%d", &a[j]);
        }
        k = a[j/2];

        printf("Case %d: %d\n", i, k);
    }
    return 0;
}
