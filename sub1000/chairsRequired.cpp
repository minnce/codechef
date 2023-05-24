#include <iostream>
using namespace std;

int main() {
	int t,x,y;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        if (x < y) {
            cout << 0 << "\n";
        }
        else {
            cout << x-y << "\n";
        }
    }
	return 0;
}
