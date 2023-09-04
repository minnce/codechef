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
    ll a,b; string c,d;
    cin>>a>>b>>c>>d;
    map<char,int> m1,m2;
    REP (i,a) {
        m1[c[i]]++;
    }
    REP (i,b) {
        m2[d[i]]++;
    }
    bool f = false;
    if (a>b) {
        for (auto e:m2) {
            if (m1[e.F]-e.S<0) {
                f = true;
                break;
            }
            m1[e.F]-=e.S;
        }
        bool o = false;
        for (auto e:m1) {
            if (e.S%2!=0) {
                if (o) {
                    f=true;
                    break;
                }
                o=true;
            } 
        }
    }
    else if (b>a) {
        for (auto e:m1) {
            if (m2[e.F]-e.S<0) {
                f = true;
                break;
            }
            m2[e.F]-=e.S;
        }
        bool o = false;
        for (auto e:m2) {
            if (e.S%2!=0) {
                if (o) {
                    f=true;
                    break;
                }
                o=true;
            } 
        }
    }
    else {
        ll res = 0;
        for (auto e:m1) {
            if (e.S!=m2[e.F]) {
                f=true;
                break;
            }
            res+=e.S*2;
        }
        if (res!=a+b) {
            f=true;
        }
    }
    if (f) cout << "NO\n";
    else cout << "YES\n";
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
