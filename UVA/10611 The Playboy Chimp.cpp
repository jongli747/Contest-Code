#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,q,t;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int first = 0;
    int last = n-1;


    cin >> q;
    for(int i=1; i<=q; i++)
    {
        cin >>t;
       int  low = 0;
        for(int j=0; j<n; j++)
        {
            if(t > arr[j])
            {
                low  = arr[j];
            }
            else
                break;
        }
        if(low == 0) cout << "X" << " ";
        else cout << low << " ";
       int  high = 0;
        for(int l=n-1; l>=0; l--)
        {
            if(t<arr[l])
            {
                high = arr[l];
            }
            else
                break;

        }
        if(high == 0) cout << "X"<< endl;
        else
            cout <<high<<endl;
       // while(first <= last)
        //{
           /* int mid = (first + last)/2;

            if(t==arr[mid])
            {
                low = arr[mid-1];
                high = arr[mid + 1];
            }
            else
            {
                if(t<arr[mid])
                {
                    for(int i=0; i<mid; i++)
                    {
                        if(t > arr[i])
                        {
                            high = arr[i];
                            low = arr[i-1];
                        }
                        else if(t==arr[i])
                        {
                            low = arr[i-1];
                            high = arr[i+1];
                        }

                    }
                }
                else
                {
                    for(int i=mid; i<n; i++)
                    {
                        if(arr[i] > t)
                        {
                            high = arr[i];
                            low = arr[i-1];
                        }
                        else if(t==arr[i])
                        {
                            low = arr[i-1];
                            high = arr[i+1];
                        }
                        else
                            {
                                low = 0;
                                high = 0;
                            }

                    }
                }
            }
        //}


        if(low ==0 || high == 0)
            cout << "X";*/




    }
    return 0;
}
