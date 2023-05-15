#include <iostream>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    cin >> x;
	    if (x < 67 || x > 45000) {
	        cout << "NO\n";
	    }
	    else {
	        cout << "YES\n";
	    }
	}
	return 0;
}
