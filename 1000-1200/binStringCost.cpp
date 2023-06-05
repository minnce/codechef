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
    int n,x,y;
    string s;
    cin >> n >> x >> y >> s;
    int tot = 0;
    int dummy = count(s.begin(),s.end(),'1');
    int dummy2 = count(s.begin(),s.end(),'0');
    if (dummy<1||dummy2<1) {
        cout << 0 << endl;
    }
    else {
        if (x > y) {
            cout << y << endl;
        }
        else {
            cout << x << endl;
        }
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
