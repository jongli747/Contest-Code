#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()

{
    char w[100];

    gets(w);

    puts(strstr(w,"0000000") || strstr(w,"1111111")? "YES" : "NO");
}
