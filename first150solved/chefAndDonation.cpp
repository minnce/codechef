#include <iostream>
using namespace std;

int main() {
	int t,x,y;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        if (x == y) {
            cout << 0 << "\n";
        }
        else if (x > y) {
            cout << x-y << "\n";
        }
        else {
            cout << y-x << "\n";
        }
    }
	return 0;
}
