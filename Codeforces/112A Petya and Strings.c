#include<stdio.h>
#include<string.h>

int main()

{
    int a;
    char fuck1[100], fuck2[100];

    scanf("%s", fuck1);
    scanf("%s", fuck2);
    int i;
    for(i=0; fuck1[i]; i++)
    {
        if(fuck1[i]<='Z')
            fuck1[i] = fuck1[i] + 32;
    }
    for(i=0; fuck2[i]; i++)
    {
        if(fuck2[i]<='Z')
            fuck2[i] = fuck2[i] + 32;

    }

    a = strcmp(fuck1,fuck2);
    printf("%d", strcmp(fuck1,fuck2));
}
