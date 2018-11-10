#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin >> s;

    int len = s.length();

    string stemp;
    string s1;
    stemp = s;
    int cnt = 0;
   for(int k=0; k < len; k++)
   {

       s1[0] = stemp[len-1];
       for(int i=1, j=0; i < len ; i++ ,j++)
       {
           s1[i] = stemp[j];
       }
       if(s1==s)
       {
           cout << cnt ;
           return 0;

       }

       else
        cnt++;

       stemp = s1;


   }

   cout << cnt;



}
