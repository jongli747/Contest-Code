#include<stdio.h>
#include<string.h>
int main()
{
    char sen[1000];
    int i,c;
    while(gets(sen)){
        c=0;
        for(i=0;sen[i]!='\0';i++){
            if(((sen[i]>='a'&&sen[i]<='z')||(sen[i]>='A'&&sen[i]<='Z'))&&(sen[i+1]<'a'||sen[i+1]>'z')&&(sen[i+1]<'A'||sen[i+1]>'Z')){
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
