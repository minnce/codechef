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
    ll n,b;
    cin >> n >> b;
    vt <ll> v;vt<ll> s;
    for (int i = 0; i < n ;i++) {
        int d;
        cin >> d;
        v.PB(d);
    }
    for (int i = 0; i < n; i++) {
        if ((b&v[i])==b) {
            s.PB(v[i]);
        }
    }
    int e = -1;
    for (int i = 0; i < s.size(); i++) {
        e&=s[i];
    }
    if (e==b) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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
