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
    cin>>n;
    ll res1=0,res2=0,maxi1=0,maxi2=0;
    REP (i,n) {
        ll d;
        cin>>d;
        res1+=d;
        maxi1=max(d,maxi1);
    }
    REP (i,n) {
        ll d;
        cin>>d;
        res2+=d;
        maxi2=max(d,maxi2);
    }
    res1-=maxi1;
    res2-=maxi2;
    if (res1<res2) cout << "Alice\n";
    else if (res2<res1) cout << "Bob\n";
    else cout << "Draw\n";
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
