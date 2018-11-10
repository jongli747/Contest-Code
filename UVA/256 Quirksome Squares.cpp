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
void num2()
{
    for(int a=0; a<10; a++)
    {
        for(int b=0; b<10; b++)
        {
            int x = sqr(a+b);
            if(x == (a*10 + b))
                cout << a << b << endl;
        }
    }


}
void num4()
{
    for(int a=0; a<10; a++)
    {
        for(int b=0; b<10; b++)
        {
            for(int c=0; c<10; c++)
            {
                for(int d=0; d<10; d++)
                {
                    int x = (a*10 + b) + (c*10 + d);
                    int s = a*1000 + b*100 + c*10 + d;
                    if(sqr(x)==s)
                        cout << a << b << c << d << endl;
                }
            }
        }
    }
}
void num6()
{
    for(int a=0; a<10; a++)
    {
        for(int b=0; b<10; b++)
        {
            for(int c=0; c<10; c++)
            {
                for(int d=0; d<10; d++)
                {
                    for(int e=0; e<10; e++)
                    {
                        for(int f=0; f<10; f++)
                        {
                            int x = (a*100 + b*10 + c) + (d*100 + e*10 + f);
                            int s = a*100000 + b*10000 + c*1000 + d*100 + e*10 + f;
                            if(sqr(x)==s)
                                cout << a << b << c << d << e << f << endl;
                        }
                    }
                }
            }
        }
    }
}
void num8()
{
    for(int a=0; a<10; a++)
    {
        for(int b=0; b<10; b++)
        {
            for(int c=0; c<10; c++)
            {
                for(int d=0; d<10; d++)
                {
                    for(int e=0; e<10; e++)
                    {
                        for(int f=0; f<10; f++)
                        {
                            for(int g=0; g<10; g++)
                            {
                                for(int h=0; h<10; h++)
                                {
                                    int x = (a*1000 + b*100 + c*10 + d) + (e*1000 + f*100 + g*10 + h);
                                    int s = a*10000000 + b*1000000 + c*100000 + d*10000 + e*1000 + f*100 + g*10 + h;
                                    if(sqr(x) == s)
                                        cout << a << b << c << d << e << f << g << h << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int main()
{
	//ios_base::sync_with_stdio(0);
    read("in.txt");
    rite("out.txt");
    int N;
    while(cin>>N)
    {
        if(N==2) num2();
        else if(N==4) num4();
        else if(N==6) num6();
        else if(N==8) num8();
    }

	return 0;
}
