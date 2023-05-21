#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    bool even = false;
	    cin >> n;
	    int arr[n];
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	        if (arr[i]%2 == 0) {
	            even = true;
	        }
	    }
	    if (even == false) {
	        cout << "YES\n";
	    }
	    else {
	        cout << "NO\n";
	    }
	    
	}
	return 0;
}
