#pragma GCC optimize("O2,no-stack-protector,unroll-loops,fast-math")
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define MP make_pair;
#define vt vector
#define all(x) begin(x), end(x)
#define sz(x) (int)x.size()
#define REP(i, a) for (int i = 0; i < a; i++)
#define pii pair<int, int>;
#define pll pair<ll, ll>;

using namespace std;

typedef vector<ll> vl;
typedef pair<ll,ll> pl;

void solve()
{
    int d;
    cin >> d;
    string s = to_string(d);
    ll tot = 0;
    for (int i = 0; i < s.size();i++) {
        tot+=(int)s[i];
    }
    for (int i = d+1; i < 1e9+8; i++) {
        string t = to_string(i);
        ll tot2=0;
        for (int j = 0; j < t.size(); j++) {
            tot2+=(int)t[j];
        }
        if (tot%2!=tot2%2) {
            cout << i << endl;
            break;
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
