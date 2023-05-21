#include <iostream>
using namespace std;

int main() {
	int t;
	long long n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int arr[n];
	    int arr2[n];
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    for (int i = 0; i < n; i++) {
	        cin >> arr2[i];
	    }
	    int best = 0;
	    for (int i = 0; i < n; i++) {
	        if (arr[best] == arr[i]) {
	            if (arr2[best] < arr2[i]) {
	                best = i;
	            }
	        }
	        else if (arr[best] < arr[i]) {
	            best = i;
	        }
	    }
	    cout << best+1 << endl;
	}
	return 0;
}
