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
    int n,x,y;
    cin >> n >> x >> y;
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n;i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n;i++) {
        cin >> arr2[i];
    }
    int diff[n];
    for (int i = 0; i < n; i++) {
        diff[i]=arr2[i]-arr[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (i==0) {
            if (diff[0]!=x&&diff[0]!=y) {
                flag = true;
                break;
            }
        }
        if (diff[i]!=x&&diff[i]!=y) {
            flag = true;
            break;
        }
    }
    if (flag==false) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
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
