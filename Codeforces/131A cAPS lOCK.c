#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define pussy 100

 main()

{
   int i;
   char fuck[pussy];
   scanf("%s",fuck);

   for (i=0; i<strlen(fuck); i++)
   {
       if(islower(fuck[i]) && i != 0)
       {
           puts(fuck);
           return 0;
       }
   }
   for (i=0; i<strlen(fuck); i++)
   {
       if (isupper(fuck[i]))
        fuck[i] = tolower(fuck[i]);
       else
        fuck[i] = toupper(fuck[i]);
   }
   puts(fuck);
   return 0;
}
