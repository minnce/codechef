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
    if (360%n==0) {
        cout << "y ";
    }
    else {
        cout << "n ";
    }
    if (n<=360) {
        cout << "y ";
    }
    else {
        cout << "n ";
    }
    if (n<27) {
        cout<< "y " << endl;
    }
    else {
        cout << "n "<< endl;
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
