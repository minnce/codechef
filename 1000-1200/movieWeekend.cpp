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
    ll n;
    cin >> n;
    ll arr[n], arr2[n];
    REP(i,n) cin >> arr[i];
    REP(i,n) cin >> arr2[i];
    ll ind = 0;
    pair<ll,ll> best = MP(0,0);
    REP (i,n) {
        if (arr[i]*arr2[i]>best.F*best.S) {
            best = MP(arr[i],arr2[i]);
            ind = i+1;
        }
        else if (arr[i]*arr2[i]==best.F*best.S&&arr2[i]>best.S) {
            best = MP(arr[i],arr2[i]);
            ind = i+1;
        }
    }
    cout << ind << endl;
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
