#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n;
		cin >> n;
		long arr[n] , pre = 0 , post = 0 , sum[n];
		for (long i = 1; i <= n; i++)
		{
			cin >> arr[i];
		}
        for (long i = 1; i <= n; i++)
		{
            pre = pre + arr[i];
		}
        for (long i = 1; i <= n; i++)
		{
            if (i == 1)
            sum[i] = pre + arr[i];
            else
            {
                post = arr[i] - arr[i-1];
                sum[i] = sum[i-1] + post;
            }
		}
        /*for (int i  = 1 ; i <= n ; i++)
            cout << sum[i] << endl;*/
		long index = LONG_MAX , res = 0;
		for(long i = 1; i <= n; i++)
		{
			if(sum[i] < index)
			{
				index = sum[i];
				res = i;
			}
		}
		cout << res << endl;
	}
}