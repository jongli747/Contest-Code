#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
   char c[101];
   cin >> c;
   for(int i=0; i<strlen(c); i++)
   {
       if(c[i] == '#')
        {
            c[i]='\0';
            break;
        }
   }
   string str(c);

   int value = std::stoi(str,nullptr,10);
 cout << value;
}
