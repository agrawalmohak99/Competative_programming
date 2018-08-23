#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		long int min_sal[n];
		for(long int i=0;i<n;i++)
			cin>>min_sal[i];
		long int offer[m],jobs[m],p[m];
		for(long int i=0;i<m;i++)
			cin>>offer[i]>>jobs[i];
		for(long int i=0;i<m;i++)
			p[i]=jobs[i];
		string selected[n],str;
		for(long int i=0;i<n;i++)
			cin>>selected[i];
		long int sum=0,total=0,max_sal=0;
		for(long int i=0;i<n;i++)
		{
			str=selected[i];
			max_sal=min_sal[i];
		//	cout<<max_sal<<endl;
			int flag=0;
			for(long int j=0 ;j<m;j++)
			{
				if(str[j]=='1')
				{ 
					if(jobs[j]>0)
					{ 
						if(offer[j]>=max_sal)
						{ 
							max_sal=offer[j];
							cout<<max_sal<<endl;
							flag=1;
						}
					}	
				}
			}
			//cout<<max_sal<<endl;
			for(long int j=0 ;j<m;j++)
			{
				if(max_sal==offer[j])
				{
					jobs[j]=jobs[j]-1;
				}
			}
			if(flag==1)
			{
				total=max_sal+total;
				sum=sum+1;
			}
		}
		long int comp=0;
		for(long int i=0;i<m;i++)
		{
			if(p[i]==jobs[i])
			{
				cout<<jobs[i]<<" ";
			}
		}
		cout<<sum<<" "<<total<<" "<<comp<<"\n";
	}
	return 0;
}
