#include <iostream>
using namespace std;

int main() {
	int t,a,b;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << a*7-b << "\n";
    }
	return 0;
}
