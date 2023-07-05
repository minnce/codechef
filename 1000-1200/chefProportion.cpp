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
    double a,b,c,d;
    cin >>a>>b>>c>>d;
    if (abs(a/b-c/d)<1e-5||abs(a/c-b/d)<1e-5||abs(a/d-b/c)<1e-5||abs(a/c-d/b)<1e-5||abs(a/b-d/c)<1e-5||abs(a/d-c/b)<1e-5) {
        cout << "Possible\n";
    }
    else {
        cout << "Impossible\n";
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
