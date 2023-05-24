#include <iostream>
using namespace std;

int main() {
	int t,x,y,z;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x >> y >> z;
        cout << x*4+y*2 << "\n";
    }
	return 0;
}
