#include<iostream>

using namespace std;

int main()

{
    int n,k,num[51],c = 0 ;

    cin>>n>>k;

    for(int i=0; i<=n; i++)
        cin>>num[i];

    for(int i=0; i<n; i++)
    {
        if(num[i] >= num[k-1] && num[i]>0)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
