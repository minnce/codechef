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
    int n,x;
    cin>>n>>x;
    int d = n+n%2;
    if (n==1&&x==1) {
        cout << "z" << endl;
    }
    else if (x>(d/2)||x>26) {
        cout << -1 << endl;
    }
    else {
        string s = "";
        int cnt = 1;
        for (int i = 0; i <n/2; i++) {
            if (cnt>x) {
                cnt=1;
            }
            s+=(char)(cnt+96);
            cnt++;
        }
        string s2 = s;
        reverse(s2.begin(),s2.end());
        if (cnt>x) {
            cnt=1;
        }
        if (n%2==1) {
            cout << s << (char)(cnt+96) << s2 << endl;
        }
        else {
            cout << s << s2 << endl;
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
