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
    int a,b,c;
    cin >> a >> b >> c;
    map<int,int> m;
    for (int i = 0; i < a; i++) {
        int d;
        cin >> d;
        m[d]++;
    }
    for (int i = 0; i < b; i++) {
        int d;
        cin >> d;
        m[d]++;
    }
    for (int i = 0; i < c; i++) {
        int d;
        cin >> d;
        m[d]++;
    }
    vt<ll> v;
    for (auto e : m) {
        if (e.S>=2) {
            v.PB(e.F);
        }
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size();i++) {
        cout << v[i] << endl;
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
