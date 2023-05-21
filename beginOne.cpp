#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    if (n < 21) {
	        cout << "NO\n";
	    }
	    else {
	        cout << "YES\n";
	    }
	}
	return 0;
}
