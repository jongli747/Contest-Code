#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,dis,p1,p2,p3;

    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    p1=(x1-x2)*(x1-x2);
    p3=(y1-y2)*(y1-y2);
    p2=sqrt(p1+p3);

    printf("p2= %f",p2);
    return 0;


}
