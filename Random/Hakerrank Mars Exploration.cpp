#include<iostream>
using namespace std;
int main()
{
   // int c = 0;
    string s;
    cin >> s ;
    int c = 0;

    for(int i=0; i<=s.length(); i++){

        if (s[i] == 'S' || s[i] =='O')
            break;
        else
            c++;
    }
    cout << c << endl;
}
