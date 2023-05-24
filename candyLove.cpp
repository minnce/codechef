#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int sum = 0;
	    for (int i = 0; i < n; i++) {
	        int dummy;
	        cin >> dummy;
	        sum+=dummy;
	    }
	    if ((sum-1)%2 == 0) {
	        cout << "YES\n";
	    }
	    else {
	        cout << "NO\n";
	    }
	}
	return 0;
}
