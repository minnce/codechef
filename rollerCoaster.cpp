#include <iostream>
using namespace std;

int main() {
	int t,x,h;
	cin >> t;
	for (int i =0; i < t; i++) {
	    cin >> x >> h;
	    if (x < h) {
	        cout << "NO\n";
	    }
	    else {
	        cout << "YES\n";
	    }
	}
	return 0;
}
