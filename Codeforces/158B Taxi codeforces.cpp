#include<iostream>

using namespace std;

int main()

{
    int i,car = 0,n,arr[100],sum = 0,c = 0, car2 =0 ,a = 1;

    cin>>n;

    for( i=0; i<n; i++ ){
        cin>>arr[i];
    }

    for( i=0; i<n; i++){

        sum += arr[i];

    }
    if(sum<=4)
        cout<<1;
    else{
        car = sum/4;

        if(sum%4!=0)
            c = 1;

        car2=car+c;

    cout<< car2 <<endl;
    }




}
