#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long n;
		cin >> n;
		long arr[n];
		for(long i  =1 ; i <= n ; i++)
		{
			arr[i] = i;
		}
		if( n % 2 == 0)
		{
			for (long i = 1; i <= n; i+=2)
			{
				int temp;
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
		else
		{
			for (long i = 1; i < n; i+=2)
			{
				int temp;
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}

				int temp;
				temp = arr[n-1];
				arr[n-1] = arr[n];
				arr[n] = temp;
		}
		for (long i = 1; i <= n; ++i)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
}