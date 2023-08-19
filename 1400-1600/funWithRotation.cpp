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
    ll n,m;
    cin >> n >> m;
    ll arr[n];
    REP (i,n) {
        cin >> arr[i];
    }
    ll rot = 0;
    REP (i,m) {
        char s; ll d;
        cin >>s >> d;
        if (s=='R') {
            ll p = rot%n;
            if (p+d-1>=n) {
                cout << arr[p+d-1-n] << endl;
            }
            else if (p+d-1<0) {
                cout << arr[p+d-1+n] << endl;
            }
            else {
                cout << arr[p+d-1] << endl;
            }
        }
        else if (s=='C') {
            rot+=d;
        }
        else {
            rot-=d;
        }
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
