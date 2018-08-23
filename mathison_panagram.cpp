#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int arr[26];
        for(int i = 0; i < 26 ; i++)
        {
            cin >> arr[i];
        }
        int n;
        string str;
        cin >> str;
        n = str.size();
        for(int i = 0; i < n; i++)
        {   
            arr[int(str[i]) - 97] = 0;
        }
        int sum = 0;
        for(int i = 0; i < 26; i++)
        {
            sum = sum + arr[i];
        }
        cout << sum <<endl;
    }
    return 0;
}
