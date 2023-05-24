#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t, n;
	string s;
	cin >> t;
	while (t--) {
	    cin >> n >> s;
	    int zCount;
	    zCount = count(s.begin(),s.end(), '0');
	    cout << ((zCount<(n-zCount))?(zCount+1):(n-zCount)) << endl;
	}
	return 0;
}
