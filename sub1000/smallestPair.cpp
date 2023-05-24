#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int small1 = 999999999, small2 = 99999999;
	    for (int i = 0; i < n; i++) {
	        bool taken = false;
	        int dummy;
	        cin >> dummy;
	        if (dummy < small1) {
	            if (small1 < small2) {
	                small2 = small1;
	            }
	            small1 = dummy;
	            taken = true;
	        }
	        else if (dummy < small2) {
	            small2 = dummy;
	        }
	    }
	    cout << small1+small2 << endl;
	}
	return 0;
}
