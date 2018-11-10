#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n, a, b, c;
    cin >> n >> a >> b >> c;

    long long int temp = 0, temp2 = 0;
    long long min1 = 1e12;
    int mod = n%4;
    if(mod != 0) mod = 4-(n%4);

    if(mod == 1)
    {
        temp = min(a, b+c);
        temp2 =  3*c;
        min1 = min(temp, temp2);
    }
    else if(mod ==2)
    {
        temp = min(2*a, b);
        temp2 = 2*c;
        min1 = min(temp, temp2);
    }
    else if(mod == 3)
    {
        temp = min(3 * a, a + b);
        temp2 = c;
        min1 = min(temp2,temp);
    }
    else
        min1 = 0;

    cout << min1 <<endl;



    return 0;
}
