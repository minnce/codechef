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
    getline(cin, s);
    vt<string> v;
    int begin = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i]==' ') {
            v.PB(s.substr(begin,i-begin));
            begin = i+1;
        }
        else if (i==s.size()-1) {
            v.PB(s.substr(begin,i-begin+1));
        }
    }
    for (int i = 0; i < v.size(); i++) {
        if (i==v.size()-1) {
            for (int j = 0; j < v[i].size(); j++) {
                char d;
                if (j==0) {
                    d = toupper((v[i][0]));
                }
                else {
                    d = tolower(v[i][j]);
                }
                cout << d;
            }
            cout << endl;
        }
        else {
            char dummy = (v[i][0]);
            dummy = toupper(dummy);
            cout << dummy <<". ";
        }
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
