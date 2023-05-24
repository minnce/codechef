#include <iostream>
using namespace std;

int main() {
	int t, n, m;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    cin >> n >> m;
	    if (n <= m) {
	        cout << 0 << "\n";
	    }
	    else {
	        cout << n-m << "\n";
	    }
	}
	return 0;
}
