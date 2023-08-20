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

vt<ll> m;

void maxes() {
    m.PB(1);
    for (int i = 2; i < 34; i++) {
        m.PB(pow(2,i)-1);
    }
}

void solve()
{
    int n;
    cin >> n;
    if (n<=2) {
        cout << 1 << endl;
    }
    else {
        auto it = lower_bound(m.begin(),m.end(),n);
        ll dist = distance(m.begin(),it);
        if (*it>n) {
            dist--;
        }
        ll alt = n-m[dist];
        cout << (max(m[dist-1]+1,alt)) << endl;
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t;
   	maxes();
    	cin >> t;
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
