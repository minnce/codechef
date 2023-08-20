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
    int n, m, k;
    cin >> n >> m >> k;
    map<int,int> ma;
    vector<int> v;
    vector<int> v2;
    int tot1 = 0; int tot2 = 0;
    for (int i = 0; i < m; i++) {
        int dummy;
        cin >> dummy;
        v.pb(dummy);
        ma[dummy]++;
    }
    for (int i = 0; i < k; i++) {
        int dummy;
        cin >> dummy;
        ma[dummy]++;
        v2.pb(dummy);
    }
    for (const auto elem : ma) {
        if (elem.second==2) {
            tot1++;
        }
    }
    for (int i =1; i < n+1; i++) {
        if ((find(v.begin(),v.end(),i))==v.end()&&((find(v2.begin(),v2.end(),i))==v2.end())) {
            tot2++;
        }
    }
    cout << tot1 << " " << tot2 << endl;
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
