#include <iostream>
using namespace std;

int main() {
	int t, n, k;
	string s;
	cin >> t;
	while (t--) {
	    cin >> n >> k;
	    cin >> s;
	    int counter = 0;
	    int tot = 0;
	    for (int i = 0; i < n; i++) {
	        if (s[i]=='1') {
	            counter = 0;
	        }
	        else {
	            counter++;
	            if (counter == k) {
	                tot++;
	                counter=0;
	            }
	        }
	    }
	    cout << tot << endl;
	}
	return 0;
}
