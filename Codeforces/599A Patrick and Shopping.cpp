#include<iostream>
#include<cmath>

using namespace::std;

int main()

{
    int a,b,c;

    cin >> a >> b >> c;

    int total = min(2*(a+b), min(2*(b+c), min(2*(a+c), min(a+b+c))));

    cout<<total<<endl;

}
