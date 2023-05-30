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
    map<int,int> z;
    for (const auto& elem : m) {
        z[elem.second]++;
    }
    int fre = 0;
    int check = 0;
    for (const auto& elem: z) {
        if (elem.second>fre) {
            fre = max(fre,elem.second);
            check = elem.first;
        }
    }
    cout << check << endl;
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
