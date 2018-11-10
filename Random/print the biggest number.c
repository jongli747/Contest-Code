#include<stdio.h>

int main()

{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x<y && z<y){
        printf("%d\n",y);
    }
    else if(x<z && y<z)
        printf("%d",z);
    else if(z<x && y<x)
        printf("%d",x);
}
