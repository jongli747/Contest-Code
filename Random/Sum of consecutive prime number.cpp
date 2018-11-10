/************************* Believe you can and you're halfway there ********************************/
#include <iostream>
#include <stdlib.h>
#include <assert.h>
#include<cstdio>
#include<cstring>

#define pb push_back
#define ff first
#define ss second
#define mp make_pair

#define AND &&
#define OR  ||
#define space " "

#define FOR(i,x,y) for(int i=(x) ; i<= (y); ++i)
#define ROF(i,x,y) for(int i = (y); i>= (x); --i)

#define SET(a) memset (a, -1, sizeof(a))


#define MIN(a,b) ((a) < (b) ? (a): (b) )
#define MAX(a,b) ( (a) > (b) ? (a) : (b) )

#define sqr(x) ( (x) * (x) )
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define PI acos(-1.0)
#define eps 1e-9

#define phl printf("hello\n")
#define read(f) freopen(f, "r", stdin)
#define rite(f) freopen(f, "w", stdin)
#define sf scanf
#define pf printf

#define mod 1000000007
#define LL long long

using namespace std;



/************************* JONGLI *****************************/
//void sieve(int n)
//{
//
//    bool prime[n+1];
//    memset(prime, true, sizeof(prime));
//
//    for (int p=2; p*p<=n; p++)
//    {
//
//        if (prime[p] == true)
//        {
//
//            for (int i=p*2; i<=n; i += p)
//                prime[i] = false;
//        }
//    }
//    for(int i=0; i<=n; i++)
//    {
//        if(prime[i])
//            cout << i << space;
//    }
//
//
//}
#define maxn 10002
int main()
{
    //read("in.txt");
	//ios_base::sync_with_stdio(0);
	bool prime[maxn];
	memset(prime,true,sizeof(prime));
	prime[0] = prime[1] = false;
    for(int p=2; p*p<=maxn; p++)
    {
        if(prime[p])
        {
            for(int i=p*2; i<=maxn; i+=p)
                prime[i] = false;
        }
    }
    int n;
    while(sf("%d", &n))
    {
        if(n==0) return 0;
        int cnt = 0;
        for(int i=2;;i++)
        {
            if(prime[i] != true)
                continue;
            if(i>n) break;
            int sum = 0;
            for(int j=i;;j++)
            {
                if(prime[j] != true)
                    continue;
                if(sum > n)
                    break;
                sum = sum + j;
                if(sum==n)
                {
                    cnt ++;
                    break;
                }
            }

        }
        cout << cnt << endl;
    }
	return 0;
}

