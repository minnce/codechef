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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n ;i ++) {
        cin >> arr[i];
    }
    int mini = arr[0];
    int maxi = arr[0];
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (arr[i]<maxi&&arr[i]>mini) {
            flag = true;
            break;
        }
        maxi = max(maxi,arr[i]);
        mini = min(mini,arr[i]);
    }
    if (arr[n-1]<maxi&&arr[n-1]>mini) {
        flag = true;
    }
    if (flag==true) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
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
