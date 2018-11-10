#include<stdio.h>
int main()

{
    int i,j,m,n,num,dig,counter,c,arr[10];
    for(i=0;i<10;i++)
        arr[i]=0;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        c = 0;
        for(i = n;i <= m;i++){
            num = i;
            counter = 1;
            while(num > 0){
                dig = num%10;
                arr[dig]++;
                num /= 10;
            }
            for(j = 0; j < 10; j ++){
                if(arr[j] >= 2){
                    counter = 0;
                    break;
                }
            }
            if(counter)
                c++;
            for(j = 0; j < 10; j ++)
                arr[j] = 0;
        }
        printf("%d\n",c);


    }
    return 0;
}
