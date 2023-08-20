#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n; 
    string s;
    cin >> n >> s;
    if (n <= 2) {
        cout << s << endl;
    }
    else {
        int dummy = count(s.begin(),s.end(),'0');
        for (int i = 0; i < dummy; i++) {
            cout << 0;
        }
        int dummy2 = count(s.begin(),s.end(),'1');
        for (int i = 0; i < dummy2; i++) {
            cout << 1;
        }
        cout << endl;
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
