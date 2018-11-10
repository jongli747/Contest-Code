#include<stdio.h>

int main()

{
    char n;

    int c = 0, i;

    while(n != '\n')
    {
        scanf("%c", &n);
        if(n == '4'  || n == '7'){

          c++;

        }


    }

    (c == 4 || c == 7)?printf("YES"):printf("NO");

}
