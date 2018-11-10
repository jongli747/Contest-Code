#include<iostream>

using namespace std;

int main()

{
    int n,i,sum =0,baal = 0 ;

    int a,b;

    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>a>>b;

        sum = sum - a + b;

        if(baal<sum)
            baal = sum;



    }
    cout<<baal;
}
