#include<iostream>
#include<cstdio>

using namespace std;
int main()
{
    int n, budget, hotel, week, i, price, w, j, flag = 0, total = 0;
    int cost = 1000000;
    while(scanf("%d %d %d %d", &n, &budget, &hotel, &week)==4){

    for(i=0; i<hotel; i++)
    {
        cin >> price;

        for(j=0; j<week; j++)
        {
            cin >> w;
            if(w >= n)
            {
                total = price * n;
                if(cost > total)
                    cost = total;
            }
        }

    }

    if(cost > budget) cout << "stay home" << endl;
    else
        cout << cost << endl;
        cost = 1000000;
    }
    return 0;

}
