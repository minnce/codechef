#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	long long b, c;
	cin >> t;
	while (t--) {
	    cin >> b >> c;
	    int x = gcd(b,c);
	    cout << c/x << endl;
	}
	return 0;
}
