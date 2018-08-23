#include<bits/stdc++.h>
using namespace std;
int check(int a[],int n)
{
	int i,flag;
    
	for(i=0;i<n/2;i++)
	{
		if((a[i]==a[n-1-i]) && (a[i+1]-a[i]==0 || a[i+1]-a[i]==1)){
		flag=1;}
		else{
		flag=0;
		break;}
	}
	
	return flag;
}
int main()
{
	int t,n,a[101];
	cin>>t;
	while(t--)
	{
		int x;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(a[0] == 1)
		x=check(a,n);
		if(x==1){
		if(a[(n-1)/2]==7)
            cout<<"yes"<<endl;
        else 
        	cout<<"no"<<endl;
        }
		else
		cout<<"no"<<endl;
	}
	return 0;
}
