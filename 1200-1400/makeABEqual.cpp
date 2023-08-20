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
    int arr[n], arr2[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    int diff = 0;
    ll tot = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i]>arr2[i]) {
            diff+=arr[i]-arr2[i];
            tot+=arr[i]-arr2[i];
        }
        else if (arr2[i]>arr[i]) {
            diff-=arr2[i]-arr[i];
            tot+=arr2[i]-arr[i];
        }
    }
    if (diff!=0) {
        cout << -1 << endl;
    }
    else {
        cout << tot/2 << endl;
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
