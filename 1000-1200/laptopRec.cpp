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
    map<int,int> m;
    for (int i = 0; i < n; i++) {
        int dummy;
        cin >> dummy;
        m[dummy]++;
    }
    vector<int> v;
    int maxi = 0;
    for (const auto& elem : m) {
        v.pb(elem.second);
        maxi = elem.first;
    }
    sort(v.begin(),v.end());
    if (v[v.size()-1]==v[v.size()-2]) {
        cout << "CONFUSED\n";
    }
    else {
        for (const auto& elem : m) {
            if (elem.second==v[v.size()-1]) {
                cout << elem.first << endl;
                break;
            }
        }
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
