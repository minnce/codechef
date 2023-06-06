#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
#define vt vector
using namespace std;

void solve()
{
    int n; string s;
    cin >> n >> s;
    int code = 1e9;
    int chef = 0;
    for (int i = 0; i < n-3; i++) {
        if (s[i]=='c'&&s[i+1]=='o'&&s[i+2]=='d'&&s[i+3]=='e') {
            code = i;
        }
        else if (s[i]=='c'&&s[i+1]=='h'&&s[i+2]=='e'&&s[i+3]=='f') {
            chef = i;
            break;
        }
    }
    if (code < chef) {
        cout << "AC\n";
    }
    else {
        cout << "WA\n";
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
