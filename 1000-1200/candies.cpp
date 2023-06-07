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
    for (int i = 0; i < 2*n; i++) {
        int dummy;
        cin >> dummy;
        m[dummy]++;
    }
    bool flag = false;
    for (const auto& elem : m) {
        if (elem.second>2) {
            flag = true;
            break;
        }
    }
    if (flag == false) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
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
