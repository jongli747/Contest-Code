#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
   scanf("%d %d", &n, &k);
//    if(n<k)
//    {
//        cout << k;
//        return 0;
//    }
//    for(long long int i = n+1; ;i++)
//    {
//        if(i%k == 0)
//        {
//           cout << i << endl;
//           return 0;
//        }
//    }

      cout << (n+k)- (n%k) << endl;
}
