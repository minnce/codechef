#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
#define vt vector
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        v.pb(arr[i]);
    }
    bool flag = false;
    for (int i =0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            int dummy = arr[j]-arr[i];
            int need = dummy+arr[j];
            if ((find(v.begin(),v.end(),need))!=v.end()) {
                flag = true;
                break;
            }
        }
    }
    if (flag == false) {
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
