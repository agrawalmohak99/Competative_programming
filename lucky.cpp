#include <bits/stdc++.h>

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

int main() {
    int x,y,z,sum=0;
    cin >> x;
    y=x%1000;
    z=x/1000;
    int a=check(y);
    int b=check(z);
    if(b==a)
    {
        x=x+9;
    }
    else if(b>a)
    {
        int diff=b-a;
        x=x+diff;
    }
    else
    {
        for(int i=1;i<27;i++)
        {
            x=x+i;
            y=x%1000;
            z=x/1000;
            int a=check(y);
            int b=check(z);
            if(b==a)
            {
                break;
            }
    
        }
    }
    cout<<x<<endl;
    return 0;
}

