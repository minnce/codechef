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
    ll n; string s;
    cin>>n>>s;
    bool pos = false;
    bool neg = false;
    ll ze = 0, res =0;
    ll zc =0;
    REP (i,n) {
        if (s[i]=='+') {
            if (pos==true) {
                zc=0;
            }
            else if (neg==true&&zc%2==1) {
                res++;
            }
            pos=true;
            neg=false;
            zc=0;
        }
        else if (s[i]=='-') {
            if (neg==true) {
                zc=0;
            }
            else if (pos==true&&zc%2==1) {
                res++;
            }
            neg=true;
            pos=false;
            zc=0;
        }
        else if (s[i]=='0') {
            ze++;
            zc++;
        }
    }
    if (ze==n) {
        cout << ze << endl;
    }
    else cout << res << endl;
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
