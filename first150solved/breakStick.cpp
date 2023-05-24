#include <iostream>
using namespace std;

int main() {
	int t,n,x;
	cin >> t;
	while (t--) {
	    cin >> n >> x;
	    if (n%2 != 0 && x%2 == 0) {
	        cout << "NO\n";
	    }
	    else if (n%x == 0) {
	        cout << "YES\n";
	    }
	    else if (x%2 == 0) {
	        int dummy = n-x;
	        if (dummy%2 == 0) {
	            cout << "YES\n";
	        }
	        else {
	            cout << "NO\n";
	        }
	    }
	    else {
	        cout << "YES\n";
	    }
	}
	return 0;
}
