#include <iostream>
using namespace std;

int main() {
	double a, b;
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
	    cout << a/b << endl;
	}
	return 0;
}
