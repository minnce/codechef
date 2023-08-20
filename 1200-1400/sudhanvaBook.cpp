#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
#define vt vector
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
    int q;
    cin >> q;
    stack<int> qu;
    int arr[q];
    for (int i = 0; i < q; i++) {
        int d;
        cin >> d;
        if (d==1) {
            int d1;
            cin >> d1;
            qu.push(d1);
        }
        else {
            if (qu.size()==0) {
                cout << "kuchbhi? ";
            }
            else {
                cout << qu.top() << " ";
                qu.pop();
            }
        }
    }
    cout << endl;
}
