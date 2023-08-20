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
    int cnt = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    bool flag= false;
    for (const auto& elem : m ) {
        if (elem.second%4==1) {
            cnt++;
        }
        else if (elem.second%4==2) {
            cnt2++;
        }
        else if (elem.second%4==3) {
            cnt3++;
        }
    }
    int needed = cnt2%2;
    if (cnt > needed) {
        cout << (cnt3+(needed)+(((cnt-needed)%2)*3)+((cnt-needed)/2)*2) << endl;
    }
    else if (needed > cnt) {
        cout << (cnt3+(cnt)+((needed-cnt)*2)) << endl;
    }
    else if (needed==cnt) {
        cout << (cnt3+needed) << endl;
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
