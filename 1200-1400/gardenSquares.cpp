#pragma GCC optimize("O2,no-stack-protector,unroll-loops,fast-math")
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define MP make_pair;
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
    int n,m;
    cin >> n >> m;
    char arr[n][m];
    for (int  i =0; i < n;i ++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    ll tot = 0;
    ll beg = 1;
    while (beg<=min(n,m)) {
        for (int i = 0; i < n; i++) {
            if (i+beg>=n) {
                break;
            }
            for (int j = 0; j < m; j++) {
                if (j+beg>=m) {
                    break;
                }
                if (arr[i][j]==arr[i+beg][j]&&arr[i+beg][j]==arr[i][j+beg]&&arr[i][j]==arr[i+beg][j+beg]) {
                    tot++;
                }
            }
        }
        beg++;
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
