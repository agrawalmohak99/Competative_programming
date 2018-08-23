#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,q;
	cin>>n>>q;
	long int arr[n];
	for(long int i=1;i<=n;i++)
    {
	    cin>>arr[i];
	}
	while(q--)
	{
	    int type,x,k,l,r,ch,pos,check;
	    cin>>type;
	    if(type == 1)
	        cin>>x>>k;
	    else
	        cin>>l>>r>>ch;
	    if(type == 1)
	    {   
	        check=arr[x];
	        pos=x;
	        for(long int i=x+1;i<=n && k>0 ;i++)
	        {
	            if(arr[i]>check)
	            {
	                check=arr[i];
	                pos=i;
	                k--;
	            }
	            if((i-pos)>=100)
	            {
	                break;
	            }
	        }
	        cout<<pos<<endl;
	    }
	    else
	    {
	        for(long int i=l;i<=r;i++)
	        {
	            arr[i]=arr[i]+ch;
	        }
	    }
	    
	}
	return 0;
}
