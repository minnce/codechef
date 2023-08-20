#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int m,x,y;
    cin >> m >> x >> y;
    int arr[m];
    set<int> s;
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    int cov = x*y;
    for (int i = 0; i < m; i++) {
        int dummy = arr[i]-cov;
        int dummy2 = arr[i]+cov;
        if (dummy < 1) {
            dummy = 1;
        }
        if (dummy2 > 100) {
            dummy2 = 100;
        }
        for (int j = dummy; j < dummy2+1; j++) {
            s.insert(j);
        }
    }
    int tot = 0;
    for (int i = 1; i < 101; i++) {
        if (s.find(i)==s.end()) {
            tot++;
        }
    }
    cout << tot << endl;
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
