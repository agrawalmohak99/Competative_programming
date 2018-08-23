#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,t;
    cin>>n;
    while(n--)
    {
        cin>>s;
        cin>>t;
        int len;
        len=s.length();
        int a[26]={0};
        int b[26]={0};
        int flag=0;
        for(int i=0;i<len;i++)
        {
            a[int(s[i])-97]++;
            b[int(t[i])-97]++;
        }
        for(int i=0;i<26;i++ )
        {
            if(a[i]>=2 && b[i]==0)
                flag=1;
        }
        if(s==t)
        {
            flag=0;
        }
        else
        {
            for(int i=0;i<26;i++)
            {
                if((a[i]+b[i])>=2)
                    flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
    }
    return 0;
}
