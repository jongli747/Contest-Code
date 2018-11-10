#include<stdio.h>
#include<string.h>

int main()

{
    char a[100];
    int i,j,temp = 0;

    scanf("%s", a);
    for(i=0; i<=strlen(a); i+=2)
    {
        for(j=i+2; j<=strlen(a); j+=2)
        {
            if(a[i]>a[j])
                {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

        }

    }
    printf("%s", a);

}
