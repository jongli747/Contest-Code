#include <bits/stdc++.h>
using namespace std;
#define attogula 500

int main()
{
    long long int n, baal = 0;
    cin >> n;
    for(long long int i=1; i<n; i++)
        baal = baal + i*(n-i);

    cout << baal + n << endl;
}
