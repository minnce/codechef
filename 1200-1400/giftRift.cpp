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
    int r,c;
    cin >> r >> c;
    vt<ll> cMax (c,0);
    ll arr[r][c];
    vt<ll> rMin (r,INT_MAX);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            ll d;
            cin >> d;
            arr[i][j]=d;
            cMax[j]=max(cMax[j],d);
            rMin[i]=min(rMin[i],d);
        }
    }
    ll ans = -1;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j]==rMin[i]&&arr[i][j]==cMax[j]) {
                ans = arr[i][j];
                break;
            }
        }
    }
    if (ans==-1) {
        cout << "GUESS\n";
    }
    else {
        cout << ans << endl;
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t;
    	t=1;
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
