#include<iostream>
using namespace std;

int main()

{
    long long int n;
    cin >> n;

    while(n>5)
        n = n / 2 - 2;

    switch(n)
    {
        case 1:cout << "Sheldon";
        break;

        case 2:cout << "Leonard";
        break;

        case 3:cout << "Penny";
        break;

        case 4:cout << "Rajesh";
        break;

        case 5:cout << "Howard";
        break;
    }
    return 0;
}
