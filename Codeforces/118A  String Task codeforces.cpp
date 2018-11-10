#include<iostream>

using namespace std;

int main()

{
    char c;

    while(cin>>c){
        if(c>='A' && c<='Z')
            c+=32;
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            continue;
        else
            cout<<'.'<<c;
    }
}
