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
    int arr[n];
    int d= -1;
    for (int i = 0; i < n; i++) {
        cin >>arr[i];
        d&=arr[i];
    }
    int mini = 0;
    for (int i = 0; i < n; i++) {
        mini = mini|(d^arr[i]);
    }
    cout << d << " " << mini << endl;
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
