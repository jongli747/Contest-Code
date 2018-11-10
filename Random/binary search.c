#include<stdio.h>
int main()
{
    int c,first_index,last_index,middle,n,search,array[100];
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers: \n",n);
    for(c=0;c<n;c++){
        scanf("%d",&array[c]);

    }
    printf("Enter the value you search: \n");
    scanf("%d",&search);
    first_index=0;
    last_index=n-1;
    middle=(first_index+last_index)/2;
    while(first_index<=last_index){
        if(array[middle]<search)
            first_index=middle+1;
        else if(array[middle]== search){
        printf("%d found at location %d: \n",search,middle+1);
        break;
        }
        else
            last_index=middle-1;
        middle=(first_index+last_index)/2;

    }
    if(first_index>last_index)
        printf("NOt found");
}
