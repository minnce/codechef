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

vt<vt<int>> ve = {{0,2,4},{0,3,4},{0,2,5},{0,3,5},{1,2,4},{1,3,4},{1,2,5},{1,3,5}};

void solve()
{
    vt<string> v;
    for (int i = 0; i < 6; i++) {
        string s;
        cin >> s;
        v.PB(s);
    }
    bool flag = false;
    for (int i = 0; i < 8; i++) {
        if (v[ve[i][0]]==v[ve[i][1]]&&v[ve[i][1]]==v[ve[i][2]]) {
            flag = true;break;
        }
    }
    if (flag) cout << "YES\n";
    else cout << "NO\n";
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
