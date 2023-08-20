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
    vector<pair<int,int>> v;
    for (int i = 0; i < n; i++) {
        int d,d2;
        cin >> d >> d2;
        v.pb(make_pair(d+3,d2+1));
        v.pb(make_pair(d+3,d2-1));
        v.pb(make_pair(d-3,d2+1));
        v.pb(make_pair(d-3,d2-1));
        v.pb(make_pair(d+1,d2+3));
        v.pb(make_pair(d+1,d2-3));
        v.pb(make_pair(d-1,d2+3));
        v.pb(make_pair(d-1,d2-3));
    }
    int d1,d2; cin >> d1>>d2;
    auto p1 = make_pair(d1+1,d2);
    auto p2 = make_pair(d1-1,d2);
    auto p3 = make_pair(d1,d2+1);
    auto p4 = make_pair(d1,d2-1);
    auto p5 = make_pair(d1+1,d2+1);
    auto p6 = make_pair(d1+1,d2-1);
    auto p7 = make_pair(d1-1,d2+1);
    auto p8 = make_pair(d1-1,d2-1);
    if (find(v.begin(),v.end(),p1)==v.end()&&find(v.begin(),v.end(),p2)==v.end()&&find(v.begin(),v.end(),p3)==v.end()&&find(v.begin(),v.end(),p4)==v.end()&&find(v.begin(),v.end(),p5)==v.end()&&find(v.begin(),v.end(),p6)==v.end()&&find(v.begin(),v.end(),p7)==v.end()&&find(v.begin(),v.end(),p8)==v.end()) {
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
