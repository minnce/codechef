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
    int x,y;
    cin >> x >> y;
    if (x%2==1&&y%2==1) {
        cout << -1 << endl;
    }
    else if (x+y==3) {
        cout << -1 << endl;
    }
    else if (x==1||y==1) {
        cout << -1 << endl;
    }
    else if (x%2==1) {
        string s1 = "ab", s2 = "ab";
        x-=2;
        y-=2;
        for (int i = x; i > 1; i-=2) {
            s1+='a';
            s2+='a';
        }
        for (int i = y; i > 1; i-=2) {
            s1+='b';
            s2+='b';
        }
        reverse(s2.begin(),s2.end());
        cout << s1 << 'a' << s2 << endl;
        s1[0]='b';s1[1]='a';s2[s2.size()-1]='b';s2[s2.size()-2]='a';
        cout << s1 << 'a' << s2 << endl;
    }
    else if (y%2==1) {
        string s1 = "ab", s2 = "ab";
        x-=2;
        y-=2;
        for (int i = y; i > 1; i-=2) {
            s1+='b';
            s2+='b';
        }
        for (int i = x; i > 1; i-=2) {
            s1+='a';
            s2+='a';
        }
        reverse(s2.begin(),s2.end());
        cout << s1 << 'b' << s2 << endl;
        s1[0]='b';s1[1]='a';s2[s2.size()-1]='b';s2[s2.size()-2]='a';
        cout << s1 << 'b' << s2 << endl;
    }
    else {
        string s1 = "ab", s2 = "ab";
        x-=2;
        y-=2;
        for (int i = y; i > 1; i-=2) {
            s1+='b';
            s2+='b';
        }
        for (int i = x; i > 1; i-=2) {
            s1+='a';
            s2+='a';
        }
        reverse(s2.begin(),s2.end());
        cout << s1 << s2 << endl;
        s1[0]='b';s1[1]='a';s2[s2.size()-1]='b';s2[s2.size()-2]='a';
        cout << s1 << s2 << endl;
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
