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
    ll w,l;
    cin >> w >> l;
    ll area = w*l;
    ll dummy = max(w,l);
    ll dummy2 = min(w,l);
    ll gtr = max(w,l);
    ll sm = min(w,l);
    bool flag = false;
    if ((2*w+2*l)%4!=0) {
        cout << "YES\n";
    }
    else {
        ll i = dummy;
        while (dummy!=0) {
            if ((2*i+2*gtr)%4!=0) {
                dummy-=i;
                i=dummy;
            }
            else {
                i--;
            }
            if (i<=0) {
                if (dummy!=0){
                flag = true;  
                }
                break;
            }
        }
        if (flag == true) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
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
