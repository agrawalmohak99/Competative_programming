#include <bits/stdc++.h>
#define fast_io std::ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
using namespace std;
typedef long long ll;

int main() 
{
    fast_io;
	int t,i, flag =0;
	cin>>t;
	while(t--)
	{
	    int x[3] , y[3] , z[3];
	    int s1 = 0 , s2 = 0, s3 = 0;
	    for(int i = 0 ;i < 3;i++)
	    cin >> x[i];
	    for(int i = 0 ;i < 3;i++)
	    cin >> y[i];
	    for(int i = 0 ;i < 3;i++)
	    cin >> z[i];
	    
	    for(int i = 0 ;i < 3;i++)
	        s1 = s1 + x[i];
	    for(int i = 0 ;i < 3;i++)
	         s2 = s2 + y[i];
	    for(int i = 0 ;i < 3;i++)
	        s3 = s3 + z[i];
	    if(s1 == s2 || s2 == s3 || s1 == s3)
	    {
	       if(s1 == s2)
	       {
	           for(i = 0 ; i < 3 ; i++)
	           {
	               if(z[i] >= y[i] && z[i] >= x[i])
	               {
	                   flag = 1;
	               }
	               else
	               {
	                   flag = 0;
	                   break;
	               }
	           }
	       }
	       else if(s2 == s3)
	       {
	           for(i = 0 ; i < 3 ; i++)
	           {
	               if(x[i] >= y[i] && x[i] >= z[i])
	               {
	                   flag = 1;
	               }
	               else
	               {
	                   flag = 0;
	                   break;
	               }
	           }
	       }
	       else
	       {
	           for(i = 0 ; i < 3 ; i++)
	           {
	               if(y[i] >= z[i] && y[i] >= x[i]) 
	               {
	                   flag = 1;
	               }
	               else
	               {
	                   flag = 0;
	                   break;
	               }
	           }
	       }
	       if(flag == 0)
	       {
	           cout << "no" << endl;
	       }
	       else
	       {
	           cout << "yes" << endl;
	       }
	    }
	    else
	    {
	       if(s1 != s2)
	       {
	           for(i = 0 ; i < 3 ; i++)
	           {
	               if(z[i] < y[i] && z[i] < x[i])
	               {
	                   flag = 1;
	               }
	               else
	               {
	                   flag = 0;
	                   break;
	               }
	           }
	       }
	       else if(s2 != s3)
	       {
	           for(i = 0 ; i < 3 ; i++)
	           {
	               if(x[i] < y[i] && x[i] < z[i])
	               {
	                   flag = 1;
	               }
	               else
	               {
	                   flag = 0;
	                   break;
	               }
	           }
	       }
	       else
	       {
	           for(i = 0 ; i < 3 ; i++)
	           {
	               if(y[i] < z[i] && y[i] < x[i])
	               {
	                   flag = 1;
	               }
	               else
	               {
	                   flag = 0;
	                   break;
	               }
	           }
	       }
            if(flag == 0)
                cout << "no" << endl;
            else
	           cout <<"yes" << endl;
	    }
	}
	return 0;
}
