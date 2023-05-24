#include <iostream>
using namespace std;

int main() {
    int t, p;
    cin >> t;
    while(t--){
        int sum = 0;
        for(int i = 0; i < 5; i++){
            int a;
            cin >> a;
            sum += a;
        }   
        cin >> p;
        if(sum * p > 24 * 5) cout << "Yes\n";
        else cout << "No\n";
    }
	return 0;
}
