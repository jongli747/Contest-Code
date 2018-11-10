#include<stdio.h>

int main()

{
    long long a, nunu, baal, rev, T, i, j, torma, torbap;

   while( scanf("%lld", &T)==1 ){
    for(i=0; i<T; i++){
        scanf("%lld", &a);
        baal = 0;
        rev = 0;
        for(j=a; j!=0; j=j/10){
            torma = j%10;
            rev = rev * 10 + torma;
        }
        if(a!=rev)
            for(torbap=0; torbap<1000; torbap++){
                nunu = a + rev;
                baal++;
                rev = 0;
                a = nunu;
                for(j=a; j!=0; j/=10){
                    torma = j%10;
                    rev = rev * 10 + torma;
                }
                if(a == rev)
                    break;
            }
            printf("%lld %lld\n", baal, a);


    }
   }

    return 0;
}
