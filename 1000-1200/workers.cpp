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
    int n;
    cin >> n;
    ll arr[n], arr2[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    REP (i,n) {
        cin >> arr2[i];
    }
    ll min1=INT_MAX,min2=INT_MAX,min3=INT_MAX;
    REP (i,n) {
        if (arr2[i]==1) {
            min1=min(arr[i],min1);
        }
        else if (arr2[i]==2) {
            min2=min(arr[i],min2);
        }
        else {
            min3=min(arr[i],min3);
        }
    }
    cout << (min(min1+min2,min3)) << endl;
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
