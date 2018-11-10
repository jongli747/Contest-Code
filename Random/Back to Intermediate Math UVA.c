#include<stdio.h>
#include<math.h>
int main()
{
    int T, i;
    double s1, s2, d, v, u;
    scanf("%d", &T);
    for(i=1; i<=T; i++){
        scanf("%lf %lf %lf", &d, &v, &u);

        if(v >=u || u == 0 || v == 0){
            printf("Case %d: can't determine\n",i);
            continue;
        }
        else{
        s1 = d/u;
        s2 = d/sqrt(u*u-v*v);
        printf("Case %d: %.3lf\n",i,s2-s1);
        }



    }
    return 0;

}
