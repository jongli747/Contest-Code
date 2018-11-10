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
    //read("in.txt");
	//ios_base::sync_with_stdio(0);
	int r = 0, b = 0, y = 0, g = 0;
	string s;
	cin >> s;
	int len = s.length();
	FOR(i,0, len)
	{
	    //cout << s[i] << space;
	    if(s[i]== 'R')
        {
            if(i<3)
            {
                if(s[i+4] != 'R' && i+4 <len)
                    r++;
            }
            if(i>3)
            {
                if(i+4 <len)
                    if(s[i+4]!= 'R') r++;

                 if(i-4 >0 || i-4 == 0)
                {
                    if(s[i-4] != 'R')
                        r++;
                }
            }
        }
        else if(s[i]== 'B')
        {
            if(i<3)
            {
                if(s[i+4] != 'B' && i+4 <=len)
                    b++;
            }
            if(i>3)
            {
                if(i+4 <len)
                    if(s[i+4]!= 'B') r++;

                 if(i-4 >0 || i-4 == 0)
                {
                    if(s[i-4] != 'B')
                        b++;
                }
            }
        }
        if(s[i]== 'Y')
        {
            if(i<3)
            {
                if(s[i+4] != 'Y' && i+4 <=len)
                    y++;
            }
            if(i>3)
            {
                if(i+4 <len)
                    if(s[i+4]!= 'Y') y++;

                 if(i-4 >0 || i-4 == 0)
                {
                    if(s[i-4] != 'Y')
                        y++;
                }
            }
        }
        if(s[i]== 'G')
        {
            if(i<3)
            {
                if(s[i+4] != 'G' && i+4 <=len)
                    g++;
            }
            if(i>3)
            {
                if(i+4 <len)
                    if(s[i+4]!= 'G') g++;

                 if(i-4 >0 || i-4 == 0)
                {
                    if(s[i-4] != 'G')
                        g++;
                }
            }
        }
	}
	cout << r << space << b << space << y << space << g << endl;



	return 0;
}

