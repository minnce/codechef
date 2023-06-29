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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (i==0) {
            cout << (arr[i]&arr[i+1]) << " ";
        }
        else if (i==n-1) {
            cout << (arr[i-1]&arr[i]) << " ";
        }
        else {
            cout << (max(arr[i]&arr[i+1],arr[i]&arr[i-1])) << " ";
        }
    }
    cout << endl;
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
