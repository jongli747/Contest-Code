#include <bits/stdc++.h>
using namespace std;
int arr[6];

int main()
{

    for(int i=0; i<6; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+6);
    if(arr[0] == arr[3] && arr[4] == arr[5])
        cout << "Elephant" << endl;
    else if(arr[0]!= arr[1] && arr[2] == arr[5])
        cout << "Bear" << endl;
    else if(arr[1] == arr[4] && arr[0] != arr[5])
        cout << "Bear" << endl;
    else if(arr[0] == arr[3] && arr[4] != arr[5])
        cout << "Bear" << endl;
    else if(arr[2] == arr[5] && arr[0] == arr[1])
        cout << "Elephant" << endl;
    else
        cout << "Alien" << endl;
}
