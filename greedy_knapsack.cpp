#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    long long k,sum=0,j=1,stock=0;
    cin>>k;
    while(j<=n)
    {
        stock=0;
        stock=j*arr[j];
        if(stock<k)
        {
            sum=sum+j;
            k=k-stock;
        }
        else
        {
            int m;
            m=k/arr[j];
            stock=m*arr[j];
            sum=sum+m;
            k=k-stock;
        }
        j++;
    }
    cout<<sum;
    return 0;
}
