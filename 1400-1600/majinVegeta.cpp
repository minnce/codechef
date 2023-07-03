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

ll n = 1000007;
vt<ll>v(n);
ll arr[1000008];

void sieve() {
    for (int i = 2; i <= n; i++) {
        if (v[i]==0) {
            for (int j = i; j <=n; j+=i) {
                v[j]++;
            }
        }
    }
    ll tot = 0;
    for (int i = 0; i <= n; i++) {
        tot+=v[i];
        arr[i]=tot;
    }
}

typedef vector<ll> vl;
typedef pair<ll,ll> pl;

void solve()
{
    int a,b;
    cin >> a >> b;
    cout << arr[b-1]-arr[a-1] << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	sieve();
   	ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
