#include <iostream>
using namespace std;

int main() {
	int t,n,x,y;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    cin >> n >> x >> y;
	    bool p = false;
	    for (int z = 0; z <= n; z++) {
	        if (z*x == y) {
	            cout << "YES\n";
	            p = true;
	            break;
	        }
	        else if (z*x > y) {
	            cout << "NO\n";
	            p = true;
	            break;
	        }
	    }
	    if (p == false) {
	    cout << "NO\n";
	    }
	}
	return 0;
}
