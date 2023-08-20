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
    int n;
    cin >> n;
    int o=0,t=0,ft=0;
    bool flag = false;
    for (int i = 0; i < n ;i++) {
        int d;
        cin >> d;
        if (d==5) {
            o++;
        }
        else if (d==10) {
            if (o<=0) {
                flag = true;
            }
            else {
                o--;
                t++;
            }
        }
        else if (d==15) {
            if (t<=0&&o<=1) {
                flag = true;
            }
            else if (t>=1) {
                t--;
            }
            else if (o>=2) {
                o-=2;
            }
        }
    }
    if (flag==false) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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
