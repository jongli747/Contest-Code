#include<iostream>
#define p 10^9
using namespace std;
int main()
{
   int a, b, c, temp;
   cin >> a >> b >> c;
   if(a == b)
    cout << "YES" << endl;
   else{
   temp = b-a;

   if(temp %c == 0)
    cout << "YES" << endl;
   else
    cout << "NO" << endl;


   }

    return 0;
}
