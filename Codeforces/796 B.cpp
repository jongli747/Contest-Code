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
LL int hole[100001];
int main()
{
	//ios_base::sync_with_stdio(0);
    LL int n, m , k;
    cin >> n >> m >> k;
    for(int i=1; i<=m; i++)
        cin >> hole[i];
    int pos = 1, post = 0, current_pos = 1; int flag = 0;
    for(int q=1; q<=k; q++)
    {
        LL int u, v;
        cin >> u >> v;

        if(u== current_pos)
            current_pos = v;
        else if(v == current_pos)
            current_pos = u;
        for(int i=1; i<=m; i++)
        {
            if(current_pos == hole[i])
            {
                post = current_pos;
                flag = 1;
                break;
            }
            else if(u == hole[i])
            {
                post = u;
                flag = 2;
                break;
            }


        }


    }
    if(flag == 1) cout << post;
    else if(flag == 2) cout << post;
    else
        cout << current_pos;

	return 0;
}

