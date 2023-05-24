#include <iostream>
using namespace std;

int main() {
	int t,n,b;
	cin >> t;
	while (t--) {
	    cin >> n >> b;
	    int cur = 0;
	    for (int i = 0; i < n; i++) {
	        int d,h,p;
	        cin >> d >> h >> p;
	        if (d*h > cur && p <= b) {
	            cur = d*h;
	        }
	    }
	    if (cur != 0) {
	        cout << cur << endl;
	    }
	    else {
	        cout << "no tablet\n";
	    }
	}
	return 0;
}
