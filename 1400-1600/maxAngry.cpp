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
    ll n,k;
    cin >> n >> k;
    if (k>=n/2) {
        cout << (n*(n-1))/2<<endl;
    }
    else {
        ll t = n-k*2;
        cout << (n*(n-1))/2-(t*(t-1))/2 << endl;
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
