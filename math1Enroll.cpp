#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin >> t;
	while (t--) {
	    cin >> x >> y;
	    if (y-x < 0) {
	        cout << 0 << endl;
	    }
	    else {
	        cout << y-x << endl;
	    }
	}
	return 0;
}
