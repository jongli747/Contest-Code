#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b = 1, result = 0 , rem = 0, div, temp2 = 0, temp;

    //freopen("in.txt","r",stdin);
    //ofstream outFile("out.txt");
   // freopen("out.txt","w++", stdin);
    while(cin >> n)
    {

    temp = n;

    while(n>=3)
    {
       temp =  temp +  n/3;
       rem = n/3 + n%3;
       n = rem;
    }
    if(n==2) temp++;


    cout <<temp<< endl;

    }


}

