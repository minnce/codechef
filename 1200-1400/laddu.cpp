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
    int n; string s;
    cin >> n >> s;
    ll tot = 0;
    for (int i =0; i < n; i++) {
        string d;
        cin >> d;
        if (d=="CONTEST_WON") {
            int j;
            cin >> j;
            if (j<20) {
                tot+=20-j;
            }
            tot+=300;
        }
        else if (d=="TOP_CONTRIBUTOR") {
            tot+=300;
        }
        else if (d=="BUG_FOUND") {
            int e;
            cin >> e;
            tot+=e;
        }
        else {
            tot+=50;
        }
    }
    if (s=="INDIAN") {
        cout << tot/200 << endl;
    }
    else {
        cout << tot/400 << endl;
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
