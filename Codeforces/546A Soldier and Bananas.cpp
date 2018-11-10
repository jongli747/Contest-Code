#include<iostream>
using namespace std;

int main()
{
    int n, k, w, temp = 0,cost = 0;
    cin >> k >> n >> w ;

    for(int i=1; i<=w; i++)
    {
         cost = cost + i*k;
    }

    if(cost > n)
        temp = cost -n;
    else
        temp = 0;


    cout << temp << endl;







    return 0;
}
