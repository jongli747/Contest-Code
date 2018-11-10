#include<iostream>
using namespace std;

int main()

{
    int t, a, b, l = 0;

    cin >> t;

    for(int i=1; i<=t; i++)
    {
        cin>>a>>b;

        if(a<=10 && b<=10)
            cout<<"case " <<i<<": " <<a+b<<endl;
    }
}
