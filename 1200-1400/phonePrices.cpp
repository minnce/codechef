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
    int arr[n+5];
    arr[0]=1e9+5,arr[1]=1e9+4,arr[2]=1e9+3,arr[3]=1e9+2,arr[4]=1e9+1;
    ll tot = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i+5];
        if ((arr[i+5]<arr[i+4]&&arr[i+5]<arr[i+4]&&arr[i+5]<arr[i+3]&&arr[i+5]<arr[i+2]&&arr[i+5]<arr[i+1]&&arr[i+5]<arr[i])) {
            tot++;
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
