#include <iostream>
using namespace std;

int main() {
	int t,a,c;
	float b;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        if (a > 50 && b < .7 && c > 5600) {
            cout << 10 << endl;
        }
        else if (a > 50 && c > 5600) {
            cout << 9 << endl;
        }
        else if (b < .7 && c > 5600) {
            cout << 8 << endl;
        }
        else if (a > 50 && c > 5600) {
            cout << 7 << endl;
        }
        else if (a > 50 || b < .7 || c > 5600) {
            cout << 6 << endl;
        }
        else {
            cout << 5 << endl;
        }
    }
	return 0;
}
