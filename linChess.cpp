#include <iostream>
using namespace std;

int main() {
    int t, n;
    long long k;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> k;
        long long current = -1;
        long long best = 999999999;
        for (int i = 0; i < n; i++) {
            long long dummy;
            cin >> dummy;
            if (k%dummy == 0) {
                long long dummy2 = k/dummy;
                if (dummy2 < best) {
                    current = dummy;
                    best = dummy2;
                }
            }
        }
        cout << current << endl;
    }
	return 0;
}
