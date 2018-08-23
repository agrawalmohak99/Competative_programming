#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n+1] , brr[n+1];
        int flag = 0;
        brr[n+1] = {0};
        for(int  i = 1; i<= n; i++)
        {
            cin >> arr[i];   
            brr[i] = arr[i];
        }
        sort(arr +1, arr+n+1);
        for(int i = 1;  i<= n ; i++)
        {
            if(arr[i] == brr[i])
            {
                flag = 0;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            for(int i = 1; i <= n; i++)
            {
                if(arr[i] == i)
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 1)
        {
            cout << "Beautiful" << endl;
        }
        else
        {
            cout << "Ugly" << endl;
        }   
    }
    return 0;
}