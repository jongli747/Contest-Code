#include<stdio.h>

int main()

{
    double hour, min, baal,  maal, angle;

   while( scanf("%lf:%lf", &hour, &min)==2)
   {



    if ((hour == 0) && (min == 0)) break;

    baal = ((hour*30) + (min/2));

    maal = min * 6;

    angle = baal - maal;

    if(angle < 0) angle = angle * -1;

    if(angle > 180) angle = 360 - angle;

    printf("%.3lf", angle);

   }
    return 0;
}
