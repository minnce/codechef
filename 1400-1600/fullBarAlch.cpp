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
    ll n,h,y1,y2,l;
    cin >> n >> h >> y1 >> y2 >> l;
    ll tot = 0;
    for (int i = 0; i < n; i++) {
        ll dummy,dummy2;
        cin >> dummy >> dummy2;
        if (dummy==1) {
            if (h-y1<=dummy2&&l>=1) {
                tot++;   
            }
            else {
                if (l>=1) {
                    l--;
                    if (l>0) {
                        tot++;
                    }
                }
            }
        }
        else if (dummy==2&&l>=1) {
            if (y2>=dummy2) {
                tot++;
            }
            else {
                if (l>=1) {
                    l--;
                    if (l>0) {
                        tot++;
                    }
                }
            }
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
