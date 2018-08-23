#include<bits/stdc++.h>
using namespace std;
long pre_sum(long arr[] , long n , long pos)
{
	long sum = 0;
	for(long i  = 1; i <= pos ; i++)
	{
			sum = sum + arr[i];
	}
	return sum;
}

long post_sum(long arr[] , long n , long pos)
{
	long sum = 0;
	for(long i  = pos; i <= n ; i++)
	{
			sum = sum + arr[i];
	}
	return sum;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n;
		cin >> n;
		long arr[n] , pre , post , sum[n];
		for (long i = 1; i <= n; i++)
		{
			cin >> arr[i];
		}
		for (long i = 1; i <= n; ++i)
		{
			pre = pre_sum( arr , n , i);
			post = post_sum(arr , n , i);
			sum[i] = pre + post; 
		}
		long index = INT_MAX , res;
		for(long i = 0; i < n; i++)
		{
			if(sum[i] <= index)
			{
				index = sum[i];
				res = i;
			}
		}
		cout << i << endl;
	}
}