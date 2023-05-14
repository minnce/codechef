#include <iostream>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    cin >> x;
	    if (x <= 100) {
	        cout << x << "\n";
	    }
	    else {
	        cout << x-10 << "\n";
	    }
	}
	return 0;
}
