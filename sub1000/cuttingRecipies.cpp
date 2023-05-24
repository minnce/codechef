#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int arr[n];
	    for (int i =0; i < n; i++) {
	        cin >> arr[i];
	    }
	    int greatest = arr[0];
	    for (int i = 0; i < n; i++) {
	        greatest = gcd(arr[i],greatest);
	        if (greatest == 1){
	            break;
	        }
	    }
	    for (int i = 0; i < n; i++){
	        cout << arr[i]/greatest << " ";
	    }
	    cout << endl;
	}
	return 0;
}
