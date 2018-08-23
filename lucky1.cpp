#include<bits/stdc++.h>
using namespace std;
int check(int x)
{

    int sum=0,y;
    while(x!=0)
    {
        y=x%10;
        sum=sum+y;
        x=x/10;
    }
    return sum;
}
int main()
{
	int i,x,y,z,sum=0;
	cin>>x;
	for(i=x+1;i<(x+1000);i++)
	{
		y=i%1000;
		z=i/1000;
		int a=check(y);
		int b=check(z);
		if(b==a)
		{
			cout<<i;
			break;
		}
	}
return 1;
}
