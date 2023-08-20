#include <iostream>
using namespace std;

int main() {
	long long t,n,m;
	cin >> t;
	while (t--) {
	    cin >> n >> m;
	    if (n == 1 && m == 1) {
	        cout << "0/1" << endl;
	    }
	    else if (n%2 == 0&& m%2 == 0) {
	        cout << "1/2" << endl;
	    }
	    else if (m == 1 && n%2 == 1) {
	        cout << n/2 << "/" << n << endl;
	    }
	    else if ((n*m)%2==0) {
	        cout << "1/2" << endl;
	    }
	    else {
	        long tot = n*m;
	        cout << (tot/2) << "/" << tot << endl;
	    }
	}
	return 0;
}
