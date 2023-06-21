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
    int x,a,b,c,d,e,f;
    cin >>x >>a>>b>>c>>d>>e>>f;
    int d1=(pow(a-c,2)+pow(b-d,2));
    int d2=(pow(a-e,2)+pow(b-f,2));
    int d3=(pow(c-e,2)+pow(d-f,2));
    if (d1<=pow(x,2)&&d2<=pow(x,2)||d2<=pow(x,2)&&d3<=pow(x,3)||d1<=pow(x,2)&&d3<=pow(x,2)) {
        cout << "yes\n";
    }
    else {
        cout << "no\n";
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
