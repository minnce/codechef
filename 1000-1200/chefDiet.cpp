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
    int n,k;
    cin >> n >> k;
    ll stored = 0;
    ll flage = 0;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        int dummy;
        cin >> dummy;
        if (stored+dummy<k&&flag==false) {
            flag = true;
            flage = i+1;
        }
        else {
            stored = dummy+stored-k;
        }
    }
    if (flag == false) {
        cout << "YES\n";
    }
    else {
        cout << "NO " << flage << endl;
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
