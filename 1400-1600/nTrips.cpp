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
    bool flag = false;
    for (int i = 2; i < sqrt(n); i++) {
        if (n%i==0&&n/i!=i) {
            flag = true;
            cout << 1 << " " << (n/i) << " " << i << endl;
            break;
        }
    }
    if (flag==false) {
        cout << -1 << endl;
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
