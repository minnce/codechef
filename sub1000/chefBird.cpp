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
    int x,y,z;
    cin >> x >> y >> z;
    if (z%x==0&&z%y==0) {
        cout << "ANY\n";
    }
    else if (z%x==0) {
        cout << "CHICKEN\n";
    }
    else if (z%y==0) {
        cout << "DUCK\n";
    }
    else {
        cout << "NONE\n";
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t;
    	cin>>t;
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
