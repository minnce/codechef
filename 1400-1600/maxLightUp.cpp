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
    ll p,a,b,c,x,y;
    cin>>p>>a>>b>>c>>x>>y;
    ll q = p;
    ll tot1=0,tot2=0;
    ll d = p/(a*x+b);
    p=p-(((d*(a*x))+(d*b)));
    tot1+=d;
    d = p/(a*y+c);
    tot1+=d;
    
    d = q/(a*y+c);
    q=q-(((d*(a*y))+(d*c)));
    tot2+=d;
    d = q/(a*x+b);
    tot2+=d;
    cout << (max(tot1,tot2)) << endl;
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
