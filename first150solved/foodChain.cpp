#include <iostream>
using namespace std;

int main() {
	int t, e, k;
	cin >> t;
	while (t--) {
	    cin >> e >> k;
	    int count = 0;
	    while (e != 0) {
	        e/=k;
	        count++;
	    }
	    cout << count << endl;
	}
	return 0;
}
