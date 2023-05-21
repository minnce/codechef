#include <iostream>
using namespace std;

int main() {
	long long n;
	long long sum = 0;
	long long tracker = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
	    long long dummy;
	    cin >> dummy;
	    sum += dummy;
	    tracker += i+1;
	}
	if (sum == tracker) {
	    cout << "YES\n";
	}
	else {
	    cout << "NO\n";
	}
	return 0;
}
