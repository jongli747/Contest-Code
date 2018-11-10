#include<iostream>

using namespace std;

int main()

{
    int n;

    cin>>n;

    char a = '.';

    for(int i=1; i<=n; i++)
    {
        string baal;

        cin>>baal;

        if(baal.length()<=10)
            cout<<baal<<endl;
        else
            cout<<baal[0]==a<<baal.length()-2<<baal[baal.length()-1]<<endl;
    }
}
