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
    int w,x,y,z;
    cin >> w >> x >> y >> z;
    if (x-w-y*z<0) {
        cout << "OVERFLOW\n";
    }
    else if (x-w-y*z==0){
        cout << "FILLED\n";
    }
    else {
        cout << "UNFILLED\n";
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
