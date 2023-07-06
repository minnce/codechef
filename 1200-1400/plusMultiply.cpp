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
    ll arr[n];
    int tot = 0;
    int tot2 = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
        if (arr[i]==2) {
            tot++;
        }
        else if (arr[i]==0) {
            tot2++;
        }
    }
    tot2 = ((tot2-1)*tot2)/2;
    tot = ((tot-1)*tot)/2;
    cout << tot2+tot << endl;
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
