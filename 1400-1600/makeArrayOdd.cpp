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

void solve()
{
    ll n,a;
    cin >> n >> a;
    ll e = 0;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i]%2==0) {
            e++;
        }
    }
    if (e==n&&a%2==0) {
        cout << -1 << endl;
    }
    else if (a%2==0) {
        cout << e << endl;
    }
    else if (a%2==1) {
        cout << (e+1)/2 << endl;
    }
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
