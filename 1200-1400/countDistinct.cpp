#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll n;
   	cin >> n;
   	set<int> s;
   	for (int i = 0; i < n; i++) {
   	    int dummy;
   	    cin >> dummy;
   	    s.insert(dummy);
   	}
   	cout << 2 << endl << (s.size()) << endl;
}
