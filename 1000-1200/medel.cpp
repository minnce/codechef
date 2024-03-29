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

typedef vector<ll> vl;
typedef pair<ll,ll> pl;

void solve()
{
    int n;
    cin >> n;
    ll mini = INT_MAX, indmi = 0;
    ll maxi = 0, indma = 0;
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        if (d<mini) {
            mini = d;
            indmi = i;
        }
        if (d>maxi) {
            maxi = d;
            indma = i;
        }
    }
    if (indmi<indma) {
        cout << mini << " " << maxi << endl;
    }
    else {
        cout << maxi << " " << mini << endl;
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
