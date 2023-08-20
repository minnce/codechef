#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
#define vt vector
using namespace std;

void solve()
{
    ll M = 1e9+7;
    ll n,k;
    cin >> n >> k;
    vt<ll> arr(n);
    map<ll,ll> f;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        f[arr[i]]++;
    }
    arr.clear();
    for (auto i: f) {
        arr.pb(i.F);
    }
    n = arr.size();
    k = min(k,n);
    vt<vt<ll>> dp(n+1, vt<ll>(k+1,0));
    for (int i = 0; i <= n; i++) {
        dp[i][0]=1;
    }
    for (int i =1; i<=n;i++){
        for (int j = 1; j<=k; j++) {
            dp[i][j]=(dp[i-1][j]+(dp[i-1][j-1]*f[arr[i-1]]))%M;
            dp[i][j]%=M;
        }
    }
    ll ans = 0;
    for (int i = 0; i <= k;i++) {
        ans=(ans+dp[n][i])%M;
    }
    cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t;
    	t=1;
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
