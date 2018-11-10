#include<iostream>
#include<math.h>
#define pi 3.1416
using namespace std;

int main()
{
    int t,R,n;
    double r;
    cin >> t;
    for(int i=1; i<=t; i++){
        cin >> R >> n ;
        r = R*sin(pi/n)/(1+sin(pi/n));
        cout <<"Case " << i << ": " << r <<endl;
    }
    return 0;
}
