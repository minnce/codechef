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
    int tr,dr,ts,ds;
    cin >> tr;
    map<int,int> mt;
    map<int,int> dt;
    vector<int> tv;
    vector<int> dv;
    for (int i = 0; i < tr; i++) {
        int dummy;
        cin >> dummy;
        tv.pb(dummy);
        mt[dummy]++;
    }
    cin >> dr;
    for (int i = 0; i < dr; i++) {
        int dummy;
        cin >> dummy;
        dv.pb(dummy);
        dt[dummy]++;
    }
    cin >> ts;
    for (int i = 0; i < ts; i++) {
        int dummy;
        cin >> dummy;
        mt[dummy]++;
    }
    cin >> ds;
    int arr4[ds];
    for (int i = 0; i < ds; i++) {
        int dummy;
        cin >> dummy;
        dt[dummy]++;
    }
    bool flag = false;
    for (const auto& elem : mt) {
        if (elem.second!=2) {
            if (find(tv.begin(),tv.end(),elem.first)==tv.end()) {
                flag = true;
                break;
            }
        }
    }
    for (const auto& elem : dt) {
        if (elem.second!=2) {
            if (find(dv.begin(),dv.end(),elem.first)==dv.end()) {
                flag = true;
                break;
            }
        }
    }
    if (flag == true) {
        cout << "no\n";
    }
    else {
        cout << "yes\n";
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
