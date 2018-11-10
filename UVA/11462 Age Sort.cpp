#include<bits/stdc++.h>
#define p 2000001

using namespace std;
long int arr[2000005], n, a ;

int main()
{



    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;

        for(a=0;a <n ; a++)
        {
            scanf("%ld", &arr[a]);
        }
        sort(arr,arr+a);
        for(long int i=0; i<n; i++)
        {
            printf("%ld", arr[i]);
            if(i<(n-1))
                printf(" ");

        }
        printf("\n");
    }
}
