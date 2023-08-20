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

ll arr[1000000];

void stations() {
    arr[0]=1;
    for (int i = 1; i < 1000000;i++) {
        arr[i]=arr[i-1]+i+1;
    }
}

void solve()
{
    ll d;
    cin >> d;
    ll mark = 0;
    for (int i = 0; i < 1000000; i++) {
        if (arr[i]>=d) {
            mark = i;
            break;
        }
    }
    if (arr[mark]==d) {
        cout << mark+1 << endl;
    }
    else {
        cout << (min(d-arr[mark-1]+mark,arr[mark]-d+mark+1)) << endl;
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t;
    cin >> t;
    stations();
    while (t--)
    {
        solve();
    }
    return 0;
}
