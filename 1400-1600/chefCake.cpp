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
    int n,m;
    cin >> n >> m;
    int tot = 0;
    vt<char> v = {'G','R'};
    ll p1 = 0, p2 = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            if (s[j]!=v[0]) {
                if (v[0]=='G') {
                    p1+=5;
                }
                else {
                    p1+=3;
                }
            }
            else {
                if (v[1]=='G') {
                    p2+=5;
                }
                else {
                    p2+=3;
                }
            }
            swap(v[0],v[1]);
        }
        if (m%2==0) {
            swap(v[0],v[1]);
        }
    }
    cout << (min(p1,p2)) << endl;
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
