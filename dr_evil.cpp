#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , x;
    cin >> n >> x;
    int arr[n];
    int brr[101];
    for(int i = 0 ;i < n; i++)
    {
        cin >> arr[i];
    }
    memset (brr , 0 ,sizeof brr);
    for(int i = 0 ; i < n ;i++)
    {
        brr[arr[i]]++;
    }
    brr[x]++;
    int count = 0;
    for(int i = 0 ; i < x ; i++)
    {
       if(brr[i] == 0)
       {
           count++;
       }
    }
    cout << count <<endl;
    return 0;
    
}