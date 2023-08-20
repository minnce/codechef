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
   	int n;
    cin >> n;
    int arr[n];
    queue<int> q;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        bool swape = false;
        for (int j = 0; j < n-1; j++) {
            if (arr[j]>arr[j+1]) {
                q.push(j);
                swap(arr[j],arr[j+1]);
                swape = true;
            }
        }
        if (swape==false) {
            break;
        }
    }
    cout << q.size() << endl;
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
