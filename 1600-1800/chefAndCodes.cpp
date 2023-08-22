#pragma GCC optimize("O2,no-stack-protector,unroll-loops,fast-math")
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define db double
#define MOD 1000000007
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define pq priority_queue
#define MP make_pair
#define vt vector
#define ins insert
#define __int128 int128
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x) (int)x.size()
#define REP(i, a) for (int i = 0; i < a; i++)
#define pii pair<int, int>;
#define setprf(x) setprecision(x) << fixed
#define setpr(x) setprecision(x)
#define pll pair<ll, ll>;

using namespace std;

typedef vector<ll> vl;
typedef pair<ll,ll> pl;
typedef long double ld;
typedef complex<ld> cd;

bool cus(pair<char,int>a,pair<char,int>b) {
    if (a.S!=b.S) return a.S<b.S;
    return a.F<b.F;
}

void solve()
{
    string s,s1;
    cin>>s;
    cin.ignore();
    getline(cin,s1);
    map<char,int> m;
    REP (i,s1.size()) {
        if (isalpha(s1[i])) m[tolower(s1[i])]++;
    }
    vector<pair<char,int>> v;
    for (auto e:m) {
        v.PB(MP(e.F,e.S));
    }
    sort(v.begin(),v.end(),cus);
    map<char,int> m1;
    for (int i = 0; i < v.size(); i++) {
        m1[v[i].F]=v.size()-i-1;
    }
    REP (i,s1.size()) {
        if (isalpha(s1[i])) {
            char d = tolower(s1[i]);
            char e = s[25-m1[d]];
            if (d!=s1[i]) {
                cout << (char)toupper(e);
            }
            else {
                cout << e;
            }
        }
        else cout << s1[i];
    }
    cout << endl;
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
