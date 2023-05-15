#include <iostream>
using namespace std;

int main() {
	int t, x, y;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        if (x < y) {
            cout << "PROFIT\n";
        }
        else if (x > y) {
            cout <<"LOSS\n";
        }
        else {
            cout <<"NEUTRAL\n";
        }
    }
	return 0;
}
