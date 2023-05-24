#include <iostream>
using namespace std;

int main() {
    int t;
    string d;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> d;
        int a = stoi(d.substr(0,2));
        int b = stoi(d.substr(3,4));
        if (a <= 12 && b <= 12) {
            cout << "BOTH\n";
        }
        else if (a <= 12) {
            cout << "MM/DD/YYYY\n";
        }
        else {
            cout << "DD/MM/YYYY\n";
        }
    }
	return 0;
}
