#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int x;
	    cin >> x;
	    int arr[x];
	    for (int i = 0; i < x; i++) {
	        cin >> arr[i];
	    }
	    int tot = 0;
	    for (int i = 0; i < x; i++) {
	        int sum = 0;
	        int prod = 1;
	        for (int j = i; j < x; j++) {
	            sum = sum+arr[j];
	            prod = prod*arr[j];
	            if (sum == prod) {
	                tot++;
	            }
	        }
	    }
	    cout << tot << endl;
	}
	return 0;
}
