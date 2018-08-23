#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t,n,d;
	cin>>t;
	while(t--)
	{
		long long c=0,sum=0;
		cin>>n>>d;
		long int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n;i++)
			sum=sum+arr[i];
	    int x;
		x=sum/n;
		int flag=1;
		if(sum%n==0){
		
			for(int i = 0; i < n; i++)
			{
				if(arr[i]!=x)
				{
					int a,y;
					if(arr[i+d]>arr[i])
					{
						y=x-arr[i];
						arr[i+d]=arr[i+d]-y;
						arr[i]=arr[i]+y;
						if(arr[i]==x)
						{
							c=c+y;
						}
					
					}
					else
					{
						y=arr[i]-x;
						arr[i]=y;
						arr[i+d]=arr[i+d]+y;
						if(arr[i+d]==x)
						{
							c=c+y;
						}
					}
				}
			}
			for(int i=0;i<n;i++)
			{
			    cout<<arr[i]<<" ";
			    cout<<endl;
			}
		}
		else
		{
		    flag = 0;
		}
		
		if(flag){
		
			for(int i=0;i<n;i++)
			{
			    if(arr[i]==x)
			    {
			        flag=1;
			    }
			    else
			    {
			        flag=0;
			        break;
			    }
			}
		}
		
		if(flag == 1){
		
			cout<<c<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
