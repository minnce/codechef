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
    map<char,int> m;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        m[s[i]]++;
    }
    bool others = false;
    for (auto e: m) {
        if (e.F!='L'&&e.F!='T'&&e.F!='I'&&e.F!='M'&&e.F!='E') {
            others = true;
            break;
        }
    }
    if (m['L']>=2&&m['T']>=2&&m['I']>=2&&m['M']>=2&&m['E']>=2) {
        cout << "YES\n";
    }
    else if (m['L']==2&&m['T']==2&&m['I']==2&&m['M']==2&&m['E']==1&&others==false) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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
