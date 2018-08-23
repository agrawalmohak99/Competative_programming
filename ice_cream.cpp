#include<bits/stdc++.h>
using namespace std;
void check(int arr[] , int n , int m , int brr[])
{
    int i = 0 , j = n - 1;
    int f1 = 0 , f2 = 0;
    while(i < j)
    {
        if(arr[i] + arr[j] == m )
        {
            f1 = arr[i];
            f2 = arr[j];
            break;
        }
        else if( arr[i] + arr[j] > m)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(f1 == brr[i])
        {
            f1 = i+1;
            brr[i]=-1;
        }
        if(f2 == brr[i])
        {       
            f2 = i+1;
            brr[i]=-1;
        }
    }
    if(f1 < f2)
        cout<<f1<<" "<<f2<<endl;
    else
        cout<<f2<<" "<<f1<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t --)
    {
        int m,n;
        cin >> m >> n;
        int arr[n],brr[n];
        for(int i = 0; i < n; i ++)
        {
            cin>>arr[i];
            brr[i]=arr[i];
        }
        sort(arr,arr+n);
        check(arr,n,m,brr);
      }
     return 0;
}
