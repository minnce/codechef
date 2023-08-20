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
#define REP(i, a) for (int i = 0; i < a; i++) // rep is 0 indexed
using namespace std;

void solve()
{
    int n,k; string s;
    cin >> n >> k >> s;
    int cnt = 0;
    for (int i = 0; i < n/2; i++) {
        if (s[i]!=s[n-i-1]) {
            cnt++;
        }
    }
    if (n==1) {
        cout << "YES\n";
    }
    else if ((k-cnt)%2==0&&cnt<=k) {
        cout << "YES\n";
    }
    else if (n%2==1&&cnt<=k) {
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
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
