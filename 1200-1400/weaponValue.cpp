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
    string arr[n];
    for (int i = 0;i < n; i++) {
        cin >> arr[i];
    }
    string d = arr[0];
    for (int i = 1; i<n; i++) {
        string t = "";
        for (int j = 0; j < d.length(); j++) {
            if (d[j]=='1'&&arr[i][j]=='0') {
                t+='1';
            }
            else if (d[j]=='0'&&arr[i][j]=='1') {
                t+='1';
            }
            else {
                t+='0';
            }
        }
        d=t;
    }
    cout << (count(d.begin(),d.end(),'1')) << endl;
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
