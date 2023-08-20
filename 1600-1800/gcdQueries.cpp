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
    int n,q;
    cin >> n >> q;
    int fr[n], en[n],arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i==0) {
            fr[0]=arr[0];
        }
        else {
            fr[i]=gcd(fr[i-1],arr[i]);
        }
    }
    en[n-1]=arr[n-1];
    for (int i = n-2; i >= 0; i--) {
        en[i]=gcd(arr[i],en[i+1]);
    }
    for (int i = 0; i < q;i++) {
        int d1,d2;
        cin >> d1>>d2;
        if (d1==1) {
            cout << en[d2] << endl;
        }
        else if (d2==1) {
            cout << en[1] << endl;
        }
        else if (d1==n) {
            cout << fr[n-2] << endl;
        }
        else if (d2==n) {
            cout << fr[d1-2] << endl;
        }
        else {
            cout << (gcd(fr[d1-2],en[d2])) << endl;
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
