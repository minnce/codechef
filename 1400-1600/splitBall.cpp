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

ll arr[1000009];
void facts() {
    ll MOD = 1e9+7;
    arr[1]=1;
    ll toto = 1;
    for (int i = 1; i <= 1000009; i++) {
        toto*=i;
        toto%=MOD;
        arr[i]=toto;
    }
}

void solve()
{
    ll MOD = 1e9+7;
    ll n;
    cin >> n;
    ll arr2[n];
    ll sum = 0;
    for (int i =0; i < n; i++) {
        cin >> arr2[i];
        sum+=arr[arr2[i]];
        sum%=MOD;
    }
    cout << sum%MOD << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	facts();
   	ll t;
    	cin >> t;
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
