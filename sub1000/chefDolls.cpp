#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int t,n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int sol = 0;
	    for (int i = 0; i < n; i++) {
	        int dummy;
	        cin >> dummy;
	        sol ^= dummy;
	    }
	    cout << sol << endl;
	}
	return 0;
}
