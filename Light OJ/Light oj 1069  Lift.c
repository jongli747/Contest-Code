#include<stdio.h>
int main()

{
   int x, y, t, i, j;
   scanf("%d", &t);
   j=1;
   while(t>=j){
        scanf("%d %d", &x, &y);
        if(x>y){
            i = (x-y)*4+x*4;

        }
        else if(x<y){
            i = (y-x) * 4 + x*4;
        }
        else
            i = x*4;
        printf("Case %d: %d\n",j, i+19);
        j++;
   }
    return 0;
}
