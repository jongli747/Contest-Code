#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int t,s,d,s1,d1,a;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> s  >> d;
        if(s>=d && (s+d)%2==0){

            s1  = (s+d)/2;
            d1 =  (s-d)/2;
            cout << s1 <<" " << d1 << endl;
        }
        else
            cout << "impossible" << endl;





    }
    return 0;
}
