#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m;
	cin >> t;
	while (t--) {
	    cin >> n >> m;
	    cout << gcd(n,m) << endl;
	}
	return 0;
}
