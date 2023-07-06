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
    int n; string s;
    cin >> n;
    cin.ignore();
    getline(cin,s);
    bool sp = true, u = false, l = false, flag = false;
    for (int i = 0; i< s.size(); i++) {
        if ((int)s[i]==32) {
            u=false;
            l=false;
        }
        else if ((int)s[i]>=78&&(int)s[i]<=90) {
            if (l==true) {
                flag = true;
                break;
            }
            u=true;
        }
        else if ((int)s[i]>=97&&(int)s[i]<=109) {
            if (u==true) {
                flag = true;
                break;
            }
            l = true;
        }
        else {
            flag = true;
            break;
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
    cin.ignore();
    while (t--)
    {
        solve();
    }
    return 0;
}
