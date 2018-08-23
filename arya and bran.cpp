#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n , k;
	cin >> n >> k;
	int arr[n] , sum = 0 , flag = 0;
	for(int i =  1; i<= n ; i++)
		cin >> arr[i];
	int ans = 0;
	for(int i = 1 ; i<= n; i++)
	{
	    if(arr[i] >= 9)
	    {
	        sum += 8;
	        arr[i+1] = arr[i] - 8 + arr[i+1];
	    }
	    else
	    {
	        sum += arr[i];    
	    }
	    if(sum >= k)
	    {
	        flag = 1;
	        ans = i;
	        break;
	    }
	}
	if(flag == 0)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << ans << endl;
	}
}
