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
    string s;
    cin >> s;
    ll a=0,b=0,ai=0,bi=0;
    bool af=false,bf=false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i]=='A') {
            if (af==true) {
                a+=i-ai;
                ai=i;
            }
            else {
                bf=false;
                a++; ai=i;
                af=true;
            }
        }
        else if (s[i]=='B') {
            if (bf==true) {
                b+=i-bi;
                bi=i;
            }
            else {
                af=false;
                b++; bi=i;
                bf=true;
            }
        }
    }
    cout << a << " " << b << endl;
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
