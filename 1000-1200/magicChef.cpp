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
    int n,x,s;
    cin >> n >> x >> s;
    int curr = x;
    for (int i = 0; i < s; i++) {
        int d1,d2;
        cin >> d1 >> d2;
        if (d1==curr) {
            curr=d2;
        }
        else if (d2==curr) {
            curr=d1;
        }
    }
    cout << curr << endl;
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
