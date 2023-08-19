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
    int a,b,c;
    cin >> a >> b >> c;
    int cnt = 0;
    int best = 0;
    int maxi = a*100+b;
    while (a*100+b>=c&&cnt<=10000) {
        cnt++;
        int d = a*100+b;
        d-=c;
        a=d/100;
        b=d%100;
        d = b;
        b=a;
        a=d;
        if (maxi<a*100+b) {
            best = cnt;
            maxi = a*100+b;
        }
    }
    cout << best << endl;
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
