#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int arr[n];
	    int arr2[11];
	    for (int i = 0; i < 11; i++) {
	        arr2[i] = 0;
	    }
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    for (int i = 0; i < n; i++) {
	        arr2[arr[i]]++;
	    }
	    int dummy = 0;
	    for (int i = 0; i < 11; i++) {
	        if (arr2[dummy] < arr2[i]) {
	            dummy = i;
	        }
	    }
	    cout << n-arr2[dummy] << endl;
	}
	return 0;
}
