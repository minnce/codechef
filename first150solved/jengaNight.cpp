#include <iostream>
using namespace std;

int main() {
	int t, n, x;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    cin >> n >> x;
	    if (x % n == 0) {
	        cout << "YES\n";
	    }
	    else {
	        cout << "NO\n";
	    }
	}
	return 0;
}
