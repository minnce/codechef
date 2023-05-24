#include <iostream>
using namespace std;

int main() {
    int t;
    long long a, b, p, q;
    cin >> t;
    while (t--) {
        cin >> a >> b >> p >> q;
        if ((p%a==0 && q%b==0) && (abs((p/a)-(q/b))<=1)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
	return 0;
}
