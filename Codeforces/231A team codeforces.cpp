#include<iostream>

using namespace std;

int main()

{
    int n,x,y,z,a = 0;

    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>x>>y>>z;

        if(x+y+z>1){
            a++;
        }

    }
    cout<<a<<endl;

}
