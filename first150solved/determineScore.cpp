#include <iostream>
using namespace std;

int main() {
	int t, x, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    cin >> x >> n;
	    cout << x*n/10 << "\n";
	}
	return 0;
}
