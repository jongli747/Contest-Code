#include<bits/stdc++.h>
#include <stdlib.h>
#include <assert.h>

#define pb push_back
#define ff first
#define ss second
#define mp make_pair

#define AND &&
#define OR  ||
#define space " "

#define FOR(i,x,y) for(long long int i=(x) ; i<= (y); ++i)
#define ROF(i,x,y) for(long long int i = (y); i>= (x); --i)

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


long long int arr[100001],c=0;
int main()
{
  int T;
  cin >> T;
  FOR(u,1,T)
  {
      int n, q;
      sf("%d%d", &n, &q);
      FOR(i,0,n-1)
      sf("%lld", &arr[i]);
      cout << "Case " << u << ":" << endl;
      while(q--)
      {
         LL int a, b;
         sf("%lld%lld", &a, &b);
         LL int l = 0, r = n-1, left, right;
         LL int m = 0;
         while(l<=r)
         {
             m = (l+r)/2;
             if(arr[m] == a)
             {
                 l = m;
                 break;
             }
             else if(arr[m] < a)
                l = m + 1;
             else
                r = m-1;

         }
         left = l;
         l = 0; m = 0; r = n-1;
         while(l<=r)
         {
             m = (l+r)/2;
             if(arr[m] <= b)
             {
                 l = m + 1;
             }
             else
                r = m-1;
         }
         right = l;
//         int cnt = 0;
//         for(int j=tempb; j>= 0; j--)
//         if(arr[j] <= b && arr[j] >= a)
//             cnt++;

         pf ("%lld\n", right-left);

     }

  }


  return 0;
}
