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

void solve()
{
    ll n; string s1,s2;
    cin>>n>>s1>>s2;
    map<char,int> m;
    REP (i,n) {
        if (s1[i]=='?'&&s2[i]!='?') {
            m[s2[i]]++;
        }
        else if (s2[i]=='?'&&s1[i]!='?') {
            m[s1[i]]++;
        }
    }
    ll bv=0, bc=0;
    char v='a',c='b';
    for (auto e:m) {
        bool vow = false;
        if (e.F=='a'||e.F=='e'||e.F=='i'||e.F=='o'||e.F=='u') vow = true;
        if (vow&&e.S>bv) {
            v=e.F; bv=e.S;
        }
        else if (vow!=true&&e.S>bc) {
            c=e.F; bc=e.S;
        }
    }
    ll op = INT_MAX;
    string sc1 = s1;
    string sc2 =  s2;
    ll dummy = 0;
    bool s1v,s2v;
        REP (i,n) {
            if (sc1[i]=='?') sc1[i]=v;
            if (sc2[i]=='?') sc2[i]=v;
            if (sc1[i]!=sc2[i]) {
                s1v=false;
                s2v=false;
                if (sc1[i]=='a'||sc1[i]=='e'||sc1[i]=='o'||sc1[i]=='i'||sc1[i]=='u') s1v=true;
                if (sc2[i]=='a'||sc2[i]=='e'||sc2[i]=='o'||sc2[i]=='i'||sc2[i]=='u') s2v=true;
                if ((s1v&&s2v)||(s1v==false&&s2v==false)) dummy+=2;
                else dummy++;
            }
        }
        op=min(dummy,op);
    sc1=s1;
    sc2=s2;
    dummy = 0;
        REP (i,n) {
            if (sc1[i]=='?') sc1[i]=c;
            if (sc2[i]=='?') sc2[i]=c;
            if (sc1[i]!=sc2[i]) {
                s1v=false;
                s2v=false;
                if (sc1[i]=='a'||sc1[i]=='e'||sc1[i]=='o'||sc1[i]=='i'||sc1[i]=='u') s1v=true;
                if (sc2[i]=='a'||sc2[i]=='e'||sc2[i]=='o'||sc2[i]=='i'||sc2[i]=='u') s2v=true;
                if ((s1v&&s2v)||(s1v==false&&s2v==false)) dummy+=2;
                else dummy++;
            }
        }
        op = min(op,dummy);
    cout << op << endl;
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
