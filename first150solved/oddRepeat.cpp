#include <iostream>
using namespace std;

int main() {
	int t;
	long long n, s, k;
	cin >> t;
	while (t--) {
	    cin >> n >> k >> s;
	    long long sum = 0;
	    for (int i = 0; i < n; i++) {
	        sum+=(2*i+1);
	    }
	    cout << (s-sum)/(k-1) << endl;
	}
	return 0;
}
