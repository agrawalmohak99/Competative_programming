#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int test;
    cin>>test;
    while(test --)
    {
        long long k,a,b,c=0,d,arc1,arc2,sum=0,t;
        cin>>k>>a>>b;
        float x;
        x=(float)(360/k);
        if(a<b)
        d=b-a;
        else
        {
            t=b;
            b=a;
            a=t;
        }
        sum=x*d;
        c=b-a-1;
        arc1=c;
        arc2=k-b+a-1;
        if(arc1 != arc2)
        {
            c=min(arc1,arc2);
        }
        else
        {
            c=0;
        }
        cout<<c<<endl;
    }
    return 0;
}
