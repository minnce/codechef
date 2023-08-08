#pragma GCC optimize("O2,no-stack-protector,unroll-loops,fast-math")
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define db double
#define MOD 1000000007
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define pq priority_queue
#define MP make_pair
#define vt vector
#define ins insert
#define __int128 int128
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x) (int)x.size()
#define REP(i, a) for (int i = 0; i < a; i++)
#define pii pair<int, int>;
#define setprf(x) setprecision(x) << fixed
#define setpr(x) setprecision(x)
#define pll pair<ll, ll>;

using namespace std;

typedef vector<ll> vl;
typedef pair<ll,ll> pl;
typedef long double ld;
typedef complex<ld> cd;

void solve()
{
    ll k,n;
    cin>>k>>n;
    string arr[k], arr2[n];
    REP (i,k) cin>>arr[i];
    REP (i,n) cin >> arr2[i];
    for (int i = 0; i < n; i++) {
        bool flag = false;
        for (int j = 0; j < k;j++) {
            if (arr2[i].find(arr[j])!=string::npos) {
                flag = true;
                break;
            }
            else if (arr2[i].size()>=47) {
                flag = true; break;
            }
        }
        if (flag) cout << "Good\n";
        else cout << "Bad\n";
    }
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
