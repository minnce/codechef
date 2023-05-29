#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int,int> x;
    map<int, int> y;
    for (int i = 0; i < (4*n)-1; i++) {
        int xd, yd;
        cin >> xd >> yd;
        x[xd]++;
        y[yd]++;
    }
    for (const auto& elem : x) {
        if (elem.second%2!=0) {
            cout << (elem.first) << " ";
            break;
        }
    }
    for (const auto& elem: y) {
        if (elem.second%2!=0) {
            cout << (elem.first) << " " << endl;
            break;
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
