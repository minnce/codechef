#include <iostream>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	while (t--) {
	    cin >> a >> b;
	    bool found = false;
	    int d,e,f,g;
	    cin >> d >> e >> f >> g;
	    if (d == a || d == b) {
	        if (e == a || e == b) {
	            cout << 1 << endl;
	            found = true;
	        }
	    }
	    if (a == f || a == g) {
	        if (b == f || b == g) {
	            cout << 2 << endl;
	            found = true;
	        }
	    }
	    if (found == false) {
	        cout << 0 << endl;
	    }
	}
	return 0;
}
