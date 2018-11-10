#include<bits/stdc++.h>
using namespace std;
//int arr[10001];
//int arr2[1000001];
int main()
{
    int n , m,c=0;
    cin >> n >> m;


    for(int k=1; k<=n; k++)
   {
        for(int l=1; l<=m; l=l+k)
        {
            int temp = (k+l)%5;
            if(temp==0)
                c++;
        }
    }
    cout << c << endl;


}
