
#include<bits/stdc++.h>

using namespace std;
long long mod = 10000000007;

void update(unsigned long long arr[] , long long l)
{
	arr[l] += arr[l-1];
}
void record_func(unsigned long long block_size ,unsigned long long block[] ,unsigned long long record[] ,unsigned long long l , unsigned long long r , long long value , long long random)
{
	while( l < r && l % block_size != 0 && l != 0)
	{
		block[l] += value;
		l++;
	}
	while( l + block_size <= r)
	{
		block[random] += value;
		l += block_size;
	}
	while(l <= r)
	{
		record[l] += value;
		l++;
	}
}
void update_func(unsigned long long record[] , long long i)
{
	record[i] = record[i] + 1;
}
int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long long n , m;
		cin >> n;
		cin >> m;
		unsigned long long arr[n] , record[m] , command[m][3];
		unsigned long long block_size = sqrt(m) , ignore[m];
		unsigned long long block[10000];
		ignore[m] = {0};
		block[10000] = {0};
		arr[n] = {0};
        memset(arr , 0 , sizeof arr);
        memset(block , 0 , sizeof block);
        memset(ignore , 0 , sizeof ignore);
        /*for(long long i = 0 ; i < n ; i++)
        { 
            cout << arr[i] << " ";
        }*/
        cout << endl;
		for(long long i = 0; i < m; i++)
		{
			 cin >> command[i][0] >> command[i][1] >> command[i][2];
		}
		for(long long i = m - 1; i >= 0 ; i-- )
		{
			if(command[i][0] == 2)
			{
				int x = i / (block_size);

				record_func(block_size , block , record , command[i][1] - 1, command[i][2] - 1 , (block[x] + record[i] + 1 ) % mod , ((command[i][1] - 1)/block_size));
				ignore[i] = -2;
			}
			else
			{
				update_func(record , i);
			}
		}
		for(long long i = m-1 ; i>0 ; i--)
		{
			long long check = (i/block_size);
			record[i] = block[check];
		}
		for(long long i = 0; i< m ; i++)
		{
			if(ignore[i] == 0)
			{
				arr[command[i][1] - 1] += record[i];
				if((command[i][2] - 1) < n-1)
				{
					arr[(command[i][2])] -= record[i];
				}
			}
		}
		for(long long i = 1 ; i < n ; i++)
		{
			update(arr , i);
		}
		for (long long i = 0; i < n; i++)
		{
            arr[i] = arr[i] % mod;
			cout << arr[i] << " ";
		}
		cout <<"\n";

	}
	return 0;
}