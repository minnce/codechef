#include <iostream>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	while (t--) {
	    cin >> a >> b;
	    int start = 1;
	    int as = 0;
	    int bs = 0;
	    for (int i = 1; i < 10000; i++) {
	        if (as+i > a && i%2 == 1) {
	            cout << "BOB\n";
	            break;
	        }
	        else if (bs+i > b && i%2 ==0) {
	            cout << "LIMAK\n";
	            break;
	        }
	        if (i%2 == 1) {
	            as+=i;
	        }
	        else {
	            bs+=i;
	        }
	    }
	}
	return 0;
}
