#include<iostream>
using namespace std;

int main()

{
    int t, m;
    string a, b;

    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin >>m;

        for(int j=0; j<m; j++)
        {
            cin >> a >> b;
        }
        if(b == "wine")
            cout<<"case "<< i<< ": "<<"YES"<<endl;
        else
            cout<<"case "<< i<< ": "<<"NO"<<endl;
    }
    return 0;
}
