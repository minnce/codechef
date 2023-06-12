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
#define REP(i, a) for (int i = 0; i < a; i++) // rep is 0 indexed
using namespace std;

void solve()
{
    int n,m;
    cin >> n >> m;
    vt<pair<ll,ll>> v;
    REP(i, n) {
        ll d1,d2;
        cin >> d1 >> d2;
        v.PB(MP(d1,d2));
    }
    sort(v.begin(),v.end());
    REP(i, m) {
        ll d;
        cin >> d;
        ll low = 0;
        ll high = n-1;
        ll ans = 0;
        ll mid = low+(high-low)/2;
        if (d>=v[n-1].S) {
            cout << -1 << endl;
        }
        else {
            while (low<=high) {
                mid = low+(high-low)/2;
                if (v[mid].S > d) {
                    ans = mid;
                    high = mid-1;
                }
                else {
                    low = mid+1;
                }
            }
            if (v[ans].F<=d&&v[ans].S>d) {
                cout << 0 << endl;
            }
            else {
                cout << v[ans].F-d << endl;
            }
        }
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
