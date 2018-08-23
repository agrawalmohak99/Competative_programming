#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test --)
    {
        int n;
        float v1,v2;
        cin>>n>>v1>>v2;
        float n1,n2;
        n1=(float)((1.414*n)/v1);
        n2=(float)((2*n)/v2);
        if(n1>n2)
        {
            cout<<"Elevator"<<endl;
        }
        else
        {
            cout<<"Stairs"<<endl;
        }
    }
    return 0;
}

