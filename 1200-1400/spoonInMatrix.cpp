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
    ll n,m;
    cin>>n>>m;
    bool f = false;
    string s = "spoon";
    string s2 = "noops";
    vt<ll> v (m, 0);
    vt<ll> v2 (m,0);
    for (int i = 0; i < n; i++) {
        ll d1=0,d2=0;
        for (int j = 0; j < m; j++) {
            char p;
            cin>>p;
            p = tolower(p);
            if (s[v[j]]==p) {
                v[j]++;
                if (v[j]==5) {
                    f=true;
                    v[j]=0;
                }
            } 
            else v[j]=0;
            if (p==s[d1]) {
                d1++;
                if (d1==5) {
                    f=true;
                    d1=0;
                }
            }
            else d1 = 0;
        }
    }
    if (f==true) cout << "There is a spoon!\n";
    else cout << "There is indeed no spoon!\n";
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
