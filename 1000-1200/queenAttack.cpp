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
    int x,y,z;
    cin >> x >> y >> z;
    bool f=false; bool f2= false;
    if (y==1||y==x) {
        f=true;
    }
    if (z==1||z==x) {
        f2=true;
    }
    if (f==true||f2==true) {
        cout << (x-1)*3 << endl;
    }
    else {
        cout << (x-1)*2+(min(y-1,z-1))+(min(x-y,z-1))+(min(x-z,y-1))+(min(x-z,x-y))<< endl;    
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
