#include <iostream>
using namespace std;

int main() {
	int t,x;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x;
        if (x < 3) {
            cout << "LIGHT\n";
        }
        else if (x < 7) {
            cout <<"MODERATE\n";
        }
        else {
            cout << "HEAVY\n";
        }
    }
	return 0;
}
