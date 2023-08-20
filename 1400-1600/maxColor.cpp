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
    int x,y,z;
    cin >> x >> y >> z;
    int tot = 0;
    if (x>=1) {
        x-=1;
        tot++;
    }
    if (y>=1) {
        y-=1;
        tot++;
    }
    if (z>=1) {
        z-=1;
        tot++;
    }
    int maxi = max(max(x,y),z);
    if (maxi==z) {
        if (z>=1&&x>=1) {
            tot++;
            z-=1;
            x-=1;
        }
        if (z>=1&&y>=1) {
            tot++;
            z-=1;
            y-=1;
        }
        if (x>=1&&y>=1) {
            tot++;
            x-=1;
            y-=1;
        }
    }
    else if (maxi==y) {
        if (y>=1&&x>=1) {
            tot++;
            x-=1;
            y-=1;
        }
        if (z>=1&&y>=1) {
            tot++;
            z-=1;
            y-=1;
        }
        if (z>=1&&x>=1) {
            tot++;
            x-=1;
            z-=1;
        }
    }
    else if (maxi==x) {
        if (z>=1&&x>=1) {
            tot++;
            z-=1;
            x-=1;
        }
        if (x>=1&&y>=1) {
            tot++;
            x-=1;
            y-=1;
        }
        if (z>=1&&y>=1) {
            tot++;
            x-=1;
            z-=1;
        }
    }
    cout << tot << endl;
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
