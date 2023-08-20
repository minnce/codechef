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

vt<ll> v;
vt<ll> s;

void nums() {
    ll su = 0;
    for (int i = 0; i <= 60; i++) {
        ll d=pow(2,i);
        su+=d;
        v.PB(d);
        s.PB(su);
    }
}

void solve()
{
    ll n;
    cin >> n;
    auto it = lower_bound(v.begin(),v.end(),n);
    ll d = distance(v.begin(), it);
    ll d2;
    ll su = n*d;
    for (int i = d; i <= 60; i++) {
        su+=n;
        if (s[i]>su) {
            d2 = i;
            break;
        }
    }
    cout << d2 << " " << d << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	nums();
   	ll t;
    	cin >> t;
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
