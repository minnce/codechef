#include <iostream>
using namespace std;

int main() {
	int t, x, y;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        cout << x*10+y*90 << "\n";
    }
	return 0;
}
