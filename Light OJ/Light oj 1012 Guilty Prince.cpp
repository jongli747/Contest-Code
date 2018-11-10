#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int  x[2] = {+1, -1};
int  y[2] = {+1, -1};
char g[22][22];
int d[22][22];

int main()
{

    int t;
    cin >> t;
    for(int z=1; z<=t; z++)
    {
        int w, h, startx = 0, starty = 0;
        cin >> w >> h;
        for(int i=0; i<22; i++)
        {
            memset(g[i], '\0',sizeof(g[i]));
            memset(d[i], -1, sizeof(d[i]));
        }
        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
                cin >> g[i][j];
        }
        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
                if(g[i][j] == '@')
                {
                    startx = i;
                    starty = j;
                }
        }

        pii st;
        st = make_pair(startx,starty);
        queue<pii>q;
        q.push(st);
        d[st.first][st.second] = 0;
        vector<pii>v;
        while(!q.empty())
        {
            int m = q.front().first;
            int n = q.front().second;
            q.pop();
            for(int k=0; k<2; k++)
            {
                v.push_back(make_pair(m+x[k], n));
            }
            for(int k=0; k<2; k++)
            {
                v.push_back(make_pair(m, n+y[k]));
            }
            for(int k=0; k<v.size(); k++)
            {
                if(g[v[k].first][v[k].second]=='.' && d[v[k].first][v[k].second] < 0)
                {
                    d[v[k].first][v[k].second] = d[m][n] + 1;
                    q.push(make_pair(v[k].first, v[k].second));
                }
            }

        }
        int cnt = 0;
        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
                if(d[i][j] >= 0)
                    cnt++;
        }
        cout << "Case " << z << ": " << cnt << endl;
    }
}
