#include <iostream>
using namespace std;

int main() {
	int t, x, y, z;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x >> y >> z;
        if (x > y && x < z) {
            cout << x << "\n";
        }
        else if (x > z && x < y) {
            cout << x << "\n";
        }
        else if (y < x && y > z) {
            cout << y << "\n";
        }
        else if (y > x && y < z) {
            cout << y << "\n";
        }
        else {
            cout << z << "\n";
        }
    }
	return 0;
}
