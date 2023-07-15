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
    ll n; string s1,s2;
    cin >> n >> s1 >> s2;
    ll arr[n+1];
    ll curr = 0;
    ll highest = 0;
    bool no = false;
    for (int i = 0; i < s1.size(); i++) {
        if (s2[i]!=s1[i]) {
            no = true;
        }
        else if (s2[i]==s1[i]) {
            highest++;
        }
    }
    for (int i = 0; i < n+1;i++) {
        cin >> arr[i];
    }
    ll maxi = INT_MIN;
    for (int i = 1; i <= highest; i++) {
        maxi = max(maxi,arr[i]);
    }
    if (no==true) {
        for (int i = 0; i <= highest; i++) {
            maxi = max(maxi,arr[i]);
        }
    }
    else {
        maxi = arr[highest];
    }
    cout << maxi << endl;
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
