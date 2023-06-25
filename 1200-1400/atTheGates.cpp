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
    int a,b;
    cin >> a >> b;
    char arr[a];
    for (int i = 0 ; i < a; i++) {
        cin >> arr[i];
    }
    reverse(arr,arr+a);
    ll s = 0;
    bool f = false;
    for (int i = 0; i < b; i++) {
        if (arr[i]=='H'&&f==false) {
            s++;
            f=true;
        }
        else if (arr[i]=='T'&&f==true) {
            s++;
            f=false;
        }
    }
    ll tot =0;
    reverse(arr,arr+a);
    if (s%2==0) {
        for (int i = 0; i < a-b; i++) {
            if (arr[i]=='H') {
                tot++;  
            }
        }
    }
    else {
        for (int i = 0; i < a-b; i++) {
            if (arr[i]=='T') {
                tot++;
            }
        }
    }
    cout << tot << endl;
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
