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
    ll n ;string s;
    cin >> n >> s;
    map<char,char> m;
    string d = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < d.size(); i++) {
        m[d[i]]=s[i];
    }
    REP (i,n) {
        string p;
        cin >> p;
        for (int j = 0; j < p.size(); j++) {
            if (p[j]=='_') {
                cout << " ";
            }
            else if (p[j]=='.'||p[j]==','||p[j]=='?'||p[j]=='!') cout << p[j];
            else if (p[j]<'a') {
                char l = tolower(p[j]);
                l = m[l];
                cout << (char)toupper(l);
            }
            else {
                char l = m[p[j]];
                cout << l;
            }
        }
        cout << endl;
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
