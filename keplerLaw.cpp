#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	double a,b,c,d;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c >> d;
        if (((a*a)/(c*c*c))==((b*b)/(d*d*d))) {
            cout << "YES\n";
        }
        else {
            cout <<"NO\n";
        }
    }
	return 0;
}
