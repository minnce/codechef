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
    string a,b;
    cin >> a >> b;
    map<char,int> m;
    map<char,int> m2;
    string c = a+b;
    for (int i = 0; i < c.length(); i++) {
        m[c[i]]++;
    }
    int n;
    cin >> n;
    string d = "";
    for (int i = 0; i < n; i++) {
        string e;
        cin >> e;
        d+=e;
    }
    for (int i = 0; i < d.length(); i++) {
        m2[d[i]]++;
    }
    bool flag= false;
    for (auto e : m2) {
        if (m[e.first]<e.second) {
            flag = true;
            break;
        }
    }
    if (flag == false) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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
