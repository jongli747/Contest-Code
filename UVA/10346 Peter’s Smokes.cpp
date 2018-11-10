
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n, k, temp ;
    while(scanf("%d%d", &n, &k)!=EOF && k>1)
    {
        temp = n;
        while(n>=k)
        {
            temp = temp + (n/k);
            n = (n/k) + (n%k);
        }
        cout << temp << endl;
    }
    return 0;

}
