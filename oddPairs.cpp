#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int tot = 0;
	    for (int i = 1; i < n+1; i++) {
	        for (int j = 1; j < n+1; j++) {
	            if ((i+j)%2==1) {
	                tot++;
	            }
	        }
	    }
	    cout << tot << endl;
	}
	return 0;
}
