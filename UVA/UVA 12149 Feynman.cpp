#include<iostream>
#include<cstdio>
using namespace std;



int main()
{
    int n;
    while(scanf("%d", &n)&& n){
        cout <<  n*(n + 1)*(2*n + 1) / 6 << endl;
    }



}