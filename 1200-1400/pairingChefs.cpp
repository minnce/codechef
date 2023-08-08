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
    vt<ll> v (n,1);
    vt<ll> m1, m2;
    for (int i = 0; i < m; i++) {
        ll d1,d2;
        cin>>d1>>d2;
        m1.PB(d1); m2.PB(d2);
    }
    vt<ll>ans;
    for (int i = m-1; i >= 0; i--) {
        if (v[m1[i]]==1&&v[m2[i]]==1) {
            ans.PB(i);
            v[m1[i]]--;v[m2[i]]--;
        }
    }
    reverse(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
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
