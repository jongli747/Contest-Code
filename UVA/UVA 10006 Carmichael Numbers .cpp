#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n < 2) return false ;
    for(int i=2; i * i <= n; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
unsigned int mod (unsigned int a, int k, int n)
{
    if(k==1) return a;

    if(k%2==0) return mod((a*a) % n, k/2, n);
    else
        return (a* mod((a*a) % n,k/2, n)) %n;
}

int main()
{
    vector <int> car;
    int n;
    for(int i=2; i<65001; i++)
    {
        if(isPrime(i))
            continue;
        unsigned j;
        for(j=2; j<i; j++)
        {
            if(mod(j,i,i) != j)
                break;
        }
        if(i==j)
            car.push_back(i);
    }
    while(cin>>n && n!=0)
    {
        int flag = 0;
        int sizev = car.size();
        for(int i=0; i<sizev; i++)
        {
            if(car[i] == n)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1) cout << "The number " << n << " is a Carmichael number." << endl;
        else cout << n << " is normal." << endl;
    }

}

