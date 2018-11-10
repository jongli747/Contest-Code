#include<stdio.h>
int main()
{
    int a,b,c,d,g1,g2,g3;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    while(a!=0 || b!=0 || c!=0 || d!=0){
        if (b>c) g1 = 40-b+a; else g1=a-b;
        if (c>b) g2 = c-b; else g2 = 40-b+c;
        if (d>c) g3 = 40+c-d; else g3 = c-d;
        int result = 360*2+g1*9+360+g2*9+g3*9;
        printf("%d\n",result);
          scanf("%d%d%d%d",&a,&b,&c,&d);
    }
    return 0;
}
