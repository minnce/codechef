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
    string s1,s2; cin>>s1>>s2;
    map<char,int>m; map<char,int>m2;
    for (int i =0; i < s1.size(); i++) {
        m[s1[i]]++;
    }
    for (int i =0; i < s2.size(); i++) {
        m2[s2[i]]++;
    }
    ll tot = 0;
    if (m.size()>=m2.size()) {
        for (auto e:m) {
            tot+=min(e.S,m2[e.F]);
        }
    }
    else {
        for (auto e:m2) {
            tot+=min(e.S,m[e.F]);
        }
    }
    cout << tot << endl;
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
