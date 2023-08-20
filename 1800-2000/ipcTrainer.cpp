#pragma GCC optimize("O2,no-stack-protector,unroll-loops,fast-math")
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define MP make_pair
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
    int n,d;
    cin >> n >> d;
    vector<pair<ll,pair<ll,ll>>> v;
    for (int i = 0; i < n; i++) {
        ll a,b,c;
        cin >> a >> b >> c;
        v.PB(MP(a,MP(b,c)));
    }
    sort(v.begin(),v.end());
    multiset<pair<ll,ll>> s;
    ll ind = 0;
    for (int i = 0; i < d; i++) {
        while (v[ind].F==(i+1)&&(!v.empty())) {
            s.insert(MP(v[ind].S.S,v[ind].S.F));
            ind++;
        }
        if (!s.empty()) {
            auto it = s.end();
            it--;
            s.erase(it);
            auto t = *it;
            t.S--;
            if (t.S>0) {
                s.insert(t);
            }
        }
    }
    ll toto = 0;
    for (auto e : s) {
        toto+=e.F*e.S;
    }
    cout << toto << endl;
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
