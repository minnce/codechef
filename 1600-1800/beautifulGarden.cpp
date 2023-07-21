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
    string s;
    cin >> s;
        ll b = 0, r =0;
        s+=s[0];
        for (int i = 0;i < s.size()-1;i++) {
            if (s[i]==s[i+1]) {
                if (s[i]=='R') {
                    r++;
                }
                else {
                    b++;
                }
            }
        }
        if ((b==1&&r==1)||(b==0&&r==0)) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
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
