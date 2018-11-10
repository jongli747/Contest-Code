#include<stdio.h>
#include<string.h>

int main()

{
    char f[100];
    int i,a,d, c = 0,b;

    scanf("%s",f);


    for(d='a'; d<='z'; d++)
    {



    for(i=0; f[i]!='\0'; i++)
    {
        if(f[i] == d){
            c++;
            break;
        }
    }
    }

    if(c%2==0)


            printf("CHAT WITH HER!");
        else
            printf("IGNORE HIM!");
    }
