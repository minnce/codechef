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

vt<int>v(100007);
void sieve() {
    for (int i = 2; i <= 100007; i++) {
        if (v[i]==0) {
            v[i]++;
            for (int j = i+i; j <= 100007; j+=i) {
                v[j]+=2;
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    if (v[n]!=1) {
        cout << "no\n";
    }
    else {
        cout << "yes\n";
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t;
    cin >> t;
    sieve();
    while (t--)
    {
        solve();
    }
    return 0;
}
