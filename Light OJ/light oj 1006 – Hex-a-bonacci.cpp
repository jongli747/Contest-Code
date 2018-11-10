#include<bits/stdc++.h>
using namespace std;
long long int a, b, c, d, e, f;
long long int arr[10050];
int fn(int n)
{
 for(int i=0; i<n; i++)
 {
     if(i==0)
     {
         arr[i]=a;
         continue;
     }
     if(i==1)
     {
         arr[i]=b;
         continue;
     }
     if(i==2)
     {
         arr[i]=c;
         continue;
     }
     if(i==3)
     {
         arr[i]=d;
         continue;
     }
     if(i==4)
     {
         arr[i]=e;
         continue;
     }
     if(i==5)
     {
         arr[i]=f;
         continue;
     }
     arr[i]= fn[i-1] + fn[i-2] + fn[i-3] + fn[i-4] + fn[i-5] + fn[i-6];
     arr[i] = arr[i]%10000007;

 }
 return arr[n];

}

int main()
{
    for(int l = 0; l<10050; l++)
    {
        arr[l]= -1;
    }
    long long  n, ans, cases;
    cin >> cases;

    for(long long int j=1; j<=cases; j++)
    {
        cin >> a >> b >> c >> d >> e >> f >> n;
        ans = fn(n);
        ans = ans% 10000007;
        cout << "Case " << j << ": " << ans << endl;
    }

}
