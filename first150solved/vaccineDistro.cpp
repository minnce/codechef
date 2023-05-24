#include <iostream>
using namespace std;

int main() {
	int t,n,d;
	cin >> t;
	while (t--) {
	    cin >> n >> d;
	    int risk = 0;
	    int norisk = 0;
	    for (int i = 0; i < n; i++){
	        int dummy = 0;
	        cin >> dummy;
	        if (dummy >= 80|| dummy <= 9) {
	            risk++;
	        }
	        else {
	            norisk++;
	        }
	    }
	    int count = 0;
	    if (risk%d != 0) {
	        count++;
	    }
	    if (norisk%d != 0) {
	        count++;
	    }
	    cout << risk/d + norisk/d + count << endl;
	}
	return 0;
}
