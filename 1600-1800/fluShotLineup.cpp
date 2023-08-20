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
    int n; double t;
    cin >> n >> t;
    double arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    double hi = 1e10;
    double lo = 0;
    double ans = hi;
    while (lo<=hi) {
        double mid = lo+(hi-lo)/2;
        double arr2[n];
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (i==0) {
                arr2[i]=max(0.0000,arr[i]-mid);
            }
            else {
                double dist = arr2[i-1]+t;
                if (arr[i]+mid<dist) {
                    flag = true;
                    break;
                }
                else {
                    if (arr[i]-mid<=dist) {
                        arr2[i]=dist;
                    }
                    else if (arr[i]-mid>dist) {
                        arr2[i]=arr[i]-mid;
                    }
                }
            }
        }
        if (flag==false) {
            ans = mid;
            hi = mid-0.00001;
        }
        else {
            lo=mid+0.00001;
        }
    }
    
    cout << setprecision(4) << fixed << ans << endl;
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
