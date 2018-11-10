#include <bits/stdc++.h>

using namespace std;
int main()
{

    int k2, k3, k5, k6, twofivesix = 0, threetwo = 0, temp2 = 0 ;
    cin >> k2 >> k3 >> k5 >> k6;
    //int arr[7] = {0,0,k2,k3,0,k5,k6};
    int a = 256;
    int b = 32;


       int temp = min(k2,min(k5,k6));


            twofivesix  = a * temp;

        temp2 = k2-temp;

        int temp3 = min(temp2, k3);

            threetwo = b * temp3;


   cout << twofivesix + threetwo <<endl;
}
