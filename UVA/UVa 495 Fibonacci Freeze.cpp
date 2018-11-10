/************************* Believe you can and you're halfway there ********************************/
#include <bits/stdc++.h>
#include <stdlib.h>
#include <assert.h>

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
#define CLR(x,y) memset (x,y, sizeof(x))

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

typedef long long vlong ;
typedef unsigned long long uvlong;
typedef pair<int, int> pii;
typedef pair<vlong, vlong>pll;
typedef vector <pii> vpii;
typedef vector <int> vi;

inline vlong gcd (vlong a, vlong b)
{
	a = ABS(a);
	b = ABS(b);
	while(b)
	{
		a = a%b;
		swap(a,b);
	}
	return a;
}
inline vlong bigmod (vlong a, vlong p, vlong m)
{
	vlong res = 1 % m;
	vlong x = a % m;
	while(p)
	{
		if(p & 1)
			res = ( res * x ) % m;
		x = (x * x)% m;
		p >>= 1;
	}
	return res;
}
/************************* JONGLI *****************************/


int dp[5005];
unsigned LL int arr[5005];

unsigned LL int fib(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n] == 1)
        return arr[n];
    dp[n] = 1;
    unsigned LL int ans =  fib(n-1) + fib(n-2);
    if(ans > mod)
        ans = ans - mod;
    arr[n] = ans;
    return ans;

}
int main()
{
	ios_base::sync_with_stdio(0);


    int n;
    while(cin>> n)
    {
        SET(dp);
        unsigned LL int ans = fib(n);
        cout << "The Fibonacci number for " << n << " is " << ans << endl;
    }

	return 0;
}
