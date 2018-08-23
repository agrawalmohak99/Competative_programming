        #include<bits/stdc++.h>
        using namespace std;
        int main()
        {
        	ios_base::sync_with_stdio(false);
        	cin.tie(NULL);
            long long t,n,d;
        	cin>>t;
        	while(t--)
        	{
        		long long c=0,sum=0;
        		cin>>n>>d;
        		vector<long> arr(n);
        		for(long long i=0;i<n;i++)
        			cin>>arr[i];
        		for(long long i=0;i<n;i++)
        			sum=sum+arr[i];
        	    long long x;
        		x=sum/n;
        		int flag=1;
        		if(sum%n==0)
        		{
        			for(long long i = 0; i < n; i++)
        			{
        				if(arr[i]!=x && (i+d) < n)
        				{
        			    		long int y;
        						y=x-arr[i];
        						
        						arr[i]=arr[i]+y;
        						arr.at(i+d)=arr.at(i+d)-y;
        						if(arr[i]==x)
        						{
        							if(y<0)
        							{
        							    y=y*-1;
        							}
        							c=c+y;
        						}
        				}
        				else if(arr[i]!=x)
        				{
        				    flag = 0;
        				}
        			}
        		}
        		else
        		{
        		    flag = 0;
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
