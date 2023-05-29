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
    int n,m,x;
    cin >> n >> m >> x;
    map<int,int> ma;
    for (int i = 0; i < n; i++) {
        int dummy;
        cin >> dummy;
        ma[dummy]=i+1;
    }
    set<int> s;
    set<int> e;
    int skip = n-x;
    for (const auto& elem : ma) {
        if (elem.first >= m) {
            s.insert(elem.second);
        }
    }
    if (s.size() >= x) {
        cout << (s.size()) << " ";
        for (const auto& elem : s) {
            cout << elem << " ";
        }
        cout << endl;
    }
    else {
        int cnt = 0;
        for (const auto& elem : ma) {
            if (cnt >= skip) {
                e.insert(elem.second);
            }
            cnt++;
        }
        cout << (e.size()) << " ";
        for (const auto& elem : e) {
            cout << elem << " ";
        }
        cout << endl;
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
