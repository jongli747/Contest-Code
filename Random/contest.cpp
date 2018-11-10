#include<bits/stdc++.h>
using namespace std;
int rec(long long int n)
{
   long long int temp = 0;
    if(n==0) return 1;

    //temp = rec(n-1)+rec(n-2)*2;
    else temp = pow(2,n) + rec(n/2-1);
   //else temp = pow(2,rec(n-1)) + rec(n-1);
    return temp*2;


}

int main()
{
   long long int n,t;
    cin >>t;
    for(long int i=0; i<t; i++)
    {
        cin >> n;
        cout << "Case " <<i+1<<": "<<rec(n)%33554431<<endl;

    }
    return 0;
}
