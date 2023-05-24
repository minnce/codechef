#include <iostream>
using namespace std;

int main() {
	int t,x;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x;
        cout << x*60/20 << "\n";
    }
	return 0;
}
