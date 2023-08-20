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
    string s;
    cin >> s;
    bool c =false,h=false,e=false,f=false;
    ll tot = 0;
    for (int i = 3; i< s.length();i++) {
        set<int> se;
        se.insert((int)s[i-3]);
        se.insert((int)s[i-2]);
        se.insert((int)s[i-1]);
        se.insert((int)s[i]);
        bool flag = true;
        if (se.size()!=4) {
            flag = false;
        }
        for (auto e:se) {
            if (e!=99&&e!=101&&e!=102&&e!=104) {
                flag = false;
                break;
            }
        }
        if (flag==true) {
            tot++;
        }
    }
    if (tot==0) {
        cout << "normal\n";
    }
    else {
        cout << "lovely " << tot << endl;
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
