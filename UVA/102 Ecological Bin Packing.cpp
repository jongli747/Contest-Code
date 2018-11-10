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
int main()
{
	ios_base::sync_with_stdio(0);
    int b1, b2, b3, g1, g2, g3, c1, c2, c3, arr[6], mini;
    while(cin >> b1 >> g1 >> c1 >> b2 >> g2 >> c2 >> b3 >> g3 >> c3)
    {
        arr[0] = b2 + b3 + g1 + g2 + c1 + c3;
        arr[1] = b2 + b3 + g1 + g3 + c1 + c2;
        arr[2] = b1 + b3 + g1 + g2 + c2 + c3;
        arr[3] = b2 + b1 + g1 + g3 + c2 + c3;
        arr[4] = b1 + b3 + g3 + g2 + c1 + c2;
        arr[5] = b2 + b1 + g3 + g2 + c1 + c3;
        FOR(i,0,5)
    {
        if(i==0)
            mini = arr[0];
        else if(mini>arr[i])
            mini = arr[i];
    }
     FOR(i,0,5)
    {
        if(arr[i] == mini)
        {
            if(i==0) cout << "BCG ";
            else if(i==1) cout << "BGC ";
            else if(i==2) cout << "CBG ";
            else if(i==3) cout << "CGB ";
            else if(i==4) cout << "GBC ";
            else if(i==5) cout << "GCB ";
            cout << arr[i] << endl;
            break;
        }
    }

    }




	return 0;
}

