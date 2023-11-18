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
    string s1,s2;
    cin>>s1>>s2;
    int best = INT_MAX;
    bool found = false;
    bool s = false;
    int curr = 0;
    for (int i = 0; i < s1.size()-1; i++) {
        if ((s1[i+1]=='#'&&s2[i+1]=='#')||(s1[i]=='#'&&s2[i]=='#')||s1[0]=='#') {
            break;
        }
        if (s==false) {
            if (s1[i+1]=='#') {
                s=true;
                curr++;
            }
        }
        else {
            if (s2[i+1]=='#') {
                s=false;
                curr++;
            }
        }
        if (i==s1.size()-2) {
            found=true;
            best=min(best,curr);
        }
    }
    curr=0,s=true;
    for (int i = 0; i < s1.size()-1; i++) {
        if ((s1[i+1]=='#'&&s2[i+1]=='#')||(s1[i]=='#'&&s2[i]=='#')||s2[0]=='#') {
            break;
        }
        if (s==false) {
            if (s1[i+1]=='#') {
                s=true;
                curr++;
            }
        }
        else {
            if (s2[i+1]=='#') {
                s=false;
                curr++;
            }
        }
        if (i==s1.size()-2) {
            found=true;
            best=min(best,curr);
        }
    }
    if (s1.size()==1) {
        if (s1[0]=='.'||s2[0]=='.') {
            found=true;
            best=0;
        }
    }
    if (found) cout << "Yes\n"<<best<<endl;
    else cout << "No\n";
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
