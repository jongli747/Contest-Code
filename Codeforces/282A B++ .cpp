#include<iostream>

using namespace std;

int main()

{
    int x=0,n;

    string p;

    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>p;

        if(p[1]=='+')
        {
            x++;
        }
        else if(p[1]=='-')
        {
            x--;
        }



    }
     cout<<x<<endl;

}
