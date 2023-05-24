#include <iostream>
using namespace std;

int main() {
	int t, w1, w2, x1, x2, m;
	cin >> t;
	while (t--) {
	    cin >> w1 >> w2 >> x1 >> x2 >> m;
	    if (x1*m <= w2-w1 && w2-w1 <= x2*m) {
	        cout << 1 << endl;
	    }
	    else {
	        cout << 0 << endl;
	    }
	}
	return 0;
}
