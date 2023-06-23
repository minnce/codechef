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
    ll int a,b,c,d;
	cin>>a>>b>>c>>d;
	    if(a==0||b==0||c==0||d==0||a+b==0||a+c==0||a+d==0||b+c==0||b+d==0||c+d==0||a+b+c==0||a+b+d==0||b+c+d==0||a+c+d==0||a+b+c+d==0)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
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
    	r
