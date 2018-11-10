/************************* Believe you can and you're halfway there ********************************/
#include <iostream>
using namespace std;
int arr[15];
int main()
{
    while(1)
    {
        int n = 0;
        while(cin>> arr[n])
        {
            if(arr[n]== -1)
                return 0;
            if(arr[n]==0) break;
            n++;
        }
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j <n; j++)
            {
                if(arr[i] == arr[j] * 2)
                    cnt ++;
            }
        }
        cout << cnt << endl;
    }


    return 0;
}

