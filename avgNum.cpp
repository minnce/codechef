#include <iostream>
using namespace std;

int main() {
	int t, n, k;
	long long v;
	cin >> t;
	while (t--) {
	    cin >> n >> k >> v;
	    long long sum = 0;
	    for (int i =0; i < n; i++) {
	        long long dummy;
	        cin >> dummy;
	        sum += dummy;
	    }
	    long long s = (n+k)*v;
	    if ((s-sum)%k == 0 && (s-sum)/k > 0) {
	        cout << (s-sum)/k << endl;
	    }
	    else {
	        cout << -1 << endl;
	    }
	}
	return 0;
}
