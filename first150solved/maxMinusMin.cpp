#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        int d, e;
        d = max(a, b);
        d = max(d,c);
        e = min(a, b);
        e = min(e,c);
        cout << d-e << "\n";
    }
	return 0;
}
