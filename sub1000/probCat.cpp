#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int x;
    cin >> x;
    if (x < 100) {
        cout << "Easy\n";
    }
    else if (x < 200) {
        cout << "Medium\n";
    }
    else {
        cout << "Hard\n";
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
