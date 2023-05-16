#include <iostream>
using namespace std;

int main() {
	int t,x,y;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        if (x*2 > y*5) {
            cout << "CHOCOLATE\n";
        }
        else if (x*2 < y*5) {
            cout << "CANDY\n";
        }
        else{
            cout << "EITHER\n";
        }
    }
	return 0;
}
