#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;
    bool flag = false;
    for (int i = 0; i < s.length(); i++){
        if ((i < s.length()-2)&&s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1') {
            cout << "Good\n";
            flag = true;
            break;
        }
        else if ((i < s.length()-2)&&s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0') {
            cout << "Good\n";
            flag = true;
            break;
        }
    }
    if (flag==false) {
        cout << "Bad\n";
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t;
    	cin >> t;
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
