#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while (t--) {
        cin >> n;
        int dummy = 1;
        while (n--) {
            cout << dummy << " ";
            dummy+=2;
        }
        cout << endl;
    }
	return 0;
}
