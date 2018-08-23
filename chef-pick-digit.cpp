#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string n , res;
        char ch[26];
        cin >> n;
        cin.ignore();
        int x;
        int arr[10] = {0};
        int i = 0;
        for(int i = 0; i < n.size(); i++)
        {
            arr[int(n[i]) - 48]++;
        }
        for(int i  = 0 ;i < 26; i++)
        {
            ch[i] = ' ';
        }
        if(arr[6] > 0)
        {
             
        for(int i = 5 ; i < 10; i++)
        {   x = 60;
            if(arr[6] > 1 && i == 6)
            {
                x = x + i;
                //cout<<char(x);
                ch[x - 65] = 'B';
            }
            if(arr[i] > 0 && i != 6)
            {
                x = x + i;
                //cout<<char(x);
                ch[x - 65] = char(x);
            }
        }
        }
        if(arr[7] > 0)
        {
                  
        for(int i = 0 ; i < 10; i++)
        {
            x = 70;
            if(arr[7] > 1 && i == 7)
            {
                x = x + i;
                //cout<<char(x);
                ch[x - 65] = 'M';
            }
            if(arr[i] > 0 && i != 7)
            {
                x = x + i;
                //cout<<char(x);
                ch[x - 65] = char(x);
            }
        }
        }
        if(arr[8] > 0)
        {
                  
        for(int i = 0 ; i < 10; i++)
        {
            x = 80;
            if(arr[8] > 1 && i == 8)
            {
                x = x + i;
                //cout<<char(x);
                ch[x - 65] = 'X';
            }
            if(arr[i] > 0 && i != 8)
            {
                x = x + i;
                 // cout<<char(x);
                ch[x - 65] = char(x);
            }
        }
        }
        if(arr[9] > 0 && arr[0] > 0)
        {
            x = 90;
             ch[x - 65] = 'Z';
        }
        for (int i  = 0; i < 26 ; i++)
        {
            if(ch[i] != ' ')
             cout << ch[i];
        }
        cout << endl;
    }
    return 0;
}