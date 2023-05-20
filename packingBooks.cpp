#include <iostream>
using namespace std;

int main() {
	int t,x,y,z;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a;
        cin >> x >> y >> z;
        if (y <= z) {
            cout << x << endl;
        }
        else if (y > z) {
            a = y/z;
            if (a*z < y) {
                a++;
            }
            cout << a*x << endl;
        }
    }
	return 0;
}
