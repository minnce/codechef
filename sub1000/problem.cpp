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
    int n,m;
    cin >> n >> m;
    bool flag = false;
    while (n!=m) {
        if (n>m) {
            n-=1;
            m+=1;
        }
        else {
            m-=1;
            n+=3;
        }
        if (abs(n-m)==1) {
            flag = true;
            break;
        }
    }
    if (flag==true) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
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
