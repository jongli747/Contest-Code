
#include <iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()
{
	//ios_base::sync_with_stdio(0);
    int t;
    scanf("%d", &t);
    int arr[27];
    char s[27];

    scanf("%s", s);
    for(int i=0; i<strlen(s) ; i++)
    arr[s[i]-97] = i;

    while(t--)
    {
        char A[101], B[101];
        scanf("%s%s", A, B);
        int AL[27] = {0} , BL[27] = {0};

        int asum = 0, bsum = 0;

        for(int i=0; i<strlen(A); i++)
        AL[A[i]-97]++;

        for(int i=0; i < strlen(B) ; i++)
        {
            if(AL[B[i] - 97] == 0)
                BL[B[i] - 97]++;
            else
                AL[B[i]-97]--;
        }


        for(int i=0; i<26; i++)
        {
            if(AL[i]!=0)
                asum += arr[i];
        }
        for(int i=0; i<26; i++)
        {
            if(BL[i]!=0)
                bsum += arr[i];
        }

        if(asum > bsum)
            printf("ALICE\n");
        else if(bsum > asum)
            printf("BOB\n");
        else
            printf("TIE\n");
    }

	return 0;
}

