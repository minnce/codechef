#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll r;
   	cin >> r;
   	if (r <= 50) {
   	    cout << 100 << endl;
   	} 
   	else if (r <= 100) {
   	    cout << 50 << endl;
   	}
   	else {
   	    cout << 0 << endl;
   	}
}
