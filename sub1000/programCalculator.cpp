#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	float a, b;
	string c;
	cin >> a >> b >> c;
	if (c == "+" ) {
	    cout << a+b << endl;
	}
	else if (c == "-") {
	    cout << a-b << endl;
	}
	else if (c == "*") {
	    cout << a*b << endl;
	}
	else {
	    cout << fixed << setprecision(8) << double(a)/b <<endl;
	}
	return 0;
}
