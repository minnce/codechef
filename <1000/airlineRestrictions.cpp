#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d,e;
	cin >> t;
	while (t--) {
	    cin >> a >> b >> c >> d >> e;
	    bool solved = false;
	    if (a + b <= d) {
	        if (c <= e) {
	            cout << "YES\n";
	            solved = true;
	        }
	    }
	    if (a + c <= d && solved == false) {
	        if (b <= e) {
	            cout << "YES\n";
	            solved = true;
	        }
	    }
	    if (b + c <= d && solved == false) {
	        if (a <= e) {
	            cout << "YES\n";
	            solved = true;
	        }
	    }
	    if (solved == false) {
	        cout << "NO\n";
	    }
	}
	return 0;
}
