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
    ll n,k;
    cin>>n>>k;
    map<string,int> chef;
    map<string,string> conv;
    map<string,int> country;
    REP (i,n) {
        string s1,s2;
        cin>>s1>>s2;
        conv[s1]=s2;
    }
    REP (i,k) {
        string s;
        cin>>s;
        chef[s]++;
        country[conv[s]]++;
    }
    string res,res2;
    ll a=0,b=0;
    for (auto e:chef) {
        if (e.S>a) {
            res=e.F;
            a=e.S;
        }
        else if (e.S==a&&res>e.F) {
            res=e.F;
        }
    }
    for (auto e:country) {
        if (e.S>b) {
            res2=e.F;
            b=e.S;
        }
        else if (e.S==b&&res2>e.F) {
            res2=e.F;
        }
    }
    cout << res2 << endl << res << endl;
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
