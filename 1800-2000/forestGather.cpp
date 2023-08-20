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
#define REP(i, a) for (int i = 0; i < a; i++) // rep is 0 indexed
using namespace std;

void solve()
{
    
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll n,w,l;
    cin >> n >> w >> l;
    vector<pair<ll,ll>> v;
    ll hi = 0;
    REP(i,n) {
        ll d,d2;
        cin >> d >> d2;
        v.PB(make_pair(d,d2));
        hi = max(max((w-d+d2-1)/d2,(l-d+d2-1)/d2),hi);
    }
    ll ans = hi;
    ll lo = 0;
    while (lo<=hi) {
        ll mid = lo+(hi-lo)/2;
        ll tot = 0;
        for (int i = 0; i < v.size();i++) {
            if (v[i].F+v[i].S*mid>=l) {
                tot+=v[i].F+v[i].S*mid;
                if (tot>=w) {
                    break;
                }
            }
        }
        if (tot>=w) {
            ans=mid;
            hi = mid-1;
        }
        else {
            lo = mid+1;
        }
    }
    cout << ans << endl;
}
