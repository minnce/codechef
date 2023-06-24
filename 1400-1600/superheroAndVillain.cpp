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
    int n;
    cin >> n;
    ll c = 0;
    bool v = false;
    bool su = false;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s.size()<3) {
            c--;
        }
        else if (s[s.size()-1]=='n'&&s[s.size()-2]=='a'&&s[s.size()-3]=='m') {
            c++;
        }
        else {
            c--;
        }
        if (c>=2&&v==false) {
            su=true;
        }
        if (c<=-3&&su==false) {
            v=true;
        }
    }
    if (v==true) {
        cout << "villains\n";
    }
    else if (su==true) {
        cout << "superheroes\n";
    }
    else {
        cout << "draw\n";
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
