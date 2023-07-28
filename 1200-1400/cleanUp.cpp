#pragma GCC optimize("O2,no-stack-protector,unroll-loops,fast-math")
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define db double
#define MOD 1000000007
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define pq priority_queue
#define MP make_pair
#define vt vector
#define ins insert
#define __int128 int128
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x) (int)x.size()
#define REP(i, a) for (int i = 0; i < a; i++)
#define pii pair<int, int>;
#define setprf(x) setprecision(x) << fixed
#define setpr(x) setprecision(x)
#define pll pair<ll, ll>;

using namespace std;

typedef vector<ll> vl;
typedef pair<ll,ll> pl;
typedef long double ld;
typedef complex<ld> cd;

void solve()
{
    ll n,m;
    cin >> n >> m;
    vt<ll> v (n+1, 1);
    for (int i = 0 ; i < m ;i++) {
        int d;
        cin >> d;
        v[d]++;
    }
    vt<ll> c; vt<ll> c2;
    for (int i = 1; i <= n; i++) {
        if (c.size()==c2.size()&&v[i]==1) {
            c.PB(i);
        }
        else if (v[i]==1) {
            c2.PB(i);
        }
    }
    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";    
    }
    if (c.size()==0) {
        cout << -1;
    }
    cout << endl;
    for (int i = 0; i < c2.size(); i++) {
        cout << c2[i] << " ";    
    }
    if (c2.size()==0) {
        cout << -1;
    }
    cout << endl;
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
