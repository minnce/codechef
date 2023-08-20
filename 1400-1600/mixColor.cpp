#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    set<int> colorCount;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int dummy;
        cin >> dummy;
        colorCount.insert(dummy);
    }
    
    cout << n-colorCount.size()<<endl;
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
