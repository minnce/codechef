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
    ll n;
    cin>>n;
    set<pair<ll,ll>> s1,s2;
    ll res1=0,res2=0;
    REP (i,n) {
        ll d1,d2;
        cin>>d1>>d2;
        if (s1.empty()) {
            s1.insert(MP(d1,d2));
            res1+=d2;
        }
        else {
            if (i%2) {
                auto it = s1.rbegin();
                if (it->first>d1) {
                    while (it->first>d1&&s1.size()>s2.size()) {
                        res1-=it->second;
                        res2+=it->second;
                        res1+=d2;
                        s2.insert(*it);
                        s1.erase(*it);
                        s1.insert(MP(d1,d2));
                        auto it2 = s2.begin();
                        d1=it2->F;
                        d2=it2->S;
                    }
                }
                else {
                    s2.insert(MP(d1,d2));
                    res2+=d2;
                }
            }
            else {
                auto it = s2.begin();
                if (it->F>d1) {
                    res1+=d2;
                    s1.insert(MP(d1,d2));
                }
                else {
                    res2-=it->S;
                    res1+=it->S;
                    res2+=d2;
                    s1.insert(*it);
                    s2.erase(*it);
                    s2.insert(MP(d1,d2));
                }
            }
        }
        cout << abs(res1-res2) << endl;
    }
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
