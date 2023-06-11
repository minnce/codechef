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
    int n,m;
    cin >> n >> m;
    vt<pair<string,string>> v;
    for (int i = 0; i < n; i++) {
        string d,d2;
        cin >> d >> d2;
        v.pb(make_pair(d,d2));
    }
    bool w = false;
    bool q = false;
    for (int i = 0; i < n;i ++) {
        string du = v[i].S;
        int cn = count(du.begin(),du.end(),'1');
        if (v[i].F == "correct"&&cn!=m) {
            q = true;
            break;
        }
        else if (v[i].F == "wrong"&&cn==m) {
            w = true;
        }
    }
    if (q==true) {
        cout << "INVALID\n";
    }
    else if (w==false) {
        cout << "FINE\n";
    }
    else if (w==true) {
        cout << "WEAK\n";    
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
