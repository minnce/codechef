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
    int dummy = count(s.begin(),s.end(),'0');
    int dummy2 = count(s.begin(),s.end(),'1');
    if (dummy==0||dummy2==0) {
        cout << 1 << endl;
    }
    else if (abs(dummy-dummy2)>=1) {
        cout << (min(dummy,dummy2)*2+1) << endl;
    }
    else if (abs(dummy-dummy2)==0) {
        cout << (min(dummy,dummy2)*2) << endl;
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
