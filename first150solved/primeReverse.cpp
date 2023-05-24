#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	string a,b;
	cin >> t;
	while (t--) {
	    cin >> n >> a >> b;
	    if ((count(a.begin(),a.end(),'1')) == (count(b.begin(),b.end(),'1'))) {
	        cout << "YES\n";
	    }
	    else {
	        cout << "NO\n";
	    }
	}
	return 0;
}
