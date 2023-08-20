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
    ll mg,my,mr,og,oy,ore,pg,py,pr;
    cin >> mg >> my >> mr >> og >> oy >> ore >> pg >> py >> pr;
    ll g = mg+og+pg;
    ll y = my+oy+py;
    ll r = mr+ore+pr;
    ll m = mg+my+mr;
    ll o = og+oy+ore;
    ll p = pg+py+pr;
    ll maxi = max(g,y);
    maxi = max(maxi,r);
    maxi = max(maxi,m);
    maxi = max(maxi,o);
    maxi = max(maxi,p);
    if (maxi%2==0&&maxi>0) {
        maxi--;
    }
    cout << maxi << endl;
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
