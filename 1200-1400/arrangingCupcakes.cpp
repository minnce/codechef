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
    ll n;
    cin >> n;
    ll maxi = 1e10;
    if (sqrt((double)n)==(int)sqrt(n)) {
        cout << 0 << endl;
    }
    else {
        for (int i = 1; i < (sqrt(n))+1; i++) {
            if (n%i==0&&abs(i-(n/i))<maxi){
              maxi = abs((i-(n/i)));  
            } 
        }
        if (maxi==1e10) {
            cout << n-1 << endl;
        }
        else {
            cout << maxi << endl;
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
