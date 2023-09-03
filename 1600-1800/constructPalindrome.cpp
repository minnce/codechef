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
    cin>>s;
    ll s1=0,s2=0;
    bool f = false, f2=false;
    REP (i,s.size()/2) {
        if (s[i+s1]!=s[s.size()-1-i]) {
            if (!s1) {
                if (s[i+1]==s[s.size()-1-i]) {
                    s1++;
                }
                else {
                    f=true;
                    break;
                }
            }
            else {
                f=true;
                break;
            }
        }
    }
    REP (i,s.size()/2) {
        if (s[i]!=s[s.size()-1-i-s2]) {
            if (!s2) {
                if (s[i]==s[s.size()-2-i]) {
                    s2++;
                }
                else {
                    f2=true;
                    break;
                }
            }
            else {
                f2=true;
                break;
            }
        }
    }
    if (f&&f2) cout << "NO\n";
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
