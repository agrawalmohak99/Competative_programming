#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    int t = s.size();
    int ch[26] = {0};
    for(int i = 0 ; i< t; i++)
    {
        ch[s[i] - 'a']++;
    }
    for(int i = 0 ; i < t ;i++)
    {
        if(ch[s[i] - 'a'] >= k)
        {
            cout << s[i];
        }
    }
    
    return 0;
}