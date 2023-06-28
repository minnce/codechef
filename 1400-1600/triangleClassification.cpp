#pragma GCC optimize("O2,no-stack-protector,unroll-loops,fast-math")
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define MP make_pair;
#define vt vector
#define all(x) begin(x), end(x)
#define sz(x) (int)x.size()
#define REP(i, a) for (int i = 0; i < a; i++)
#define pii pair<int, int>;
#define pll pair<ll, ll>;

using namespace std;

typedef vector<ll> vl;
typedef pair<ll,ll> pl;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll st, t;
    cin >> st >> t;
    if (st==1) {
        while (t--) {
            double a,b,c,d,e,f;
            cin >> a >> b >>c >>d>>e>>f;
            double d1 = abs(c-a);
            double d2 = abs(d-b);
            double d3 = abs(e-a);
            double d4 = abs(f-b);
            double d5 = abs(e-c);
            double d6 = abs(f-d);
            double s1 = (sqrt(pow(d1,2.00)+pow(d2,2.00)));
            double s2 = (sqrt(pow(d3,2.00)+pow(d4,2.00)));
            double s3 = (sqrt(pow(d5,2.00)+pow(d6,2.00)));
            if (abs(s1-s2)<=1e-6||abs(s3-s2)<=1e-6||abs(s1-s3)<=1e-6) {
                cout << "Isosceles triangle" << endl;
            }
            else {
                cout << "Scalene triangle" << endl;
            }
        }
    }
    else {
        while (t--) {
            double a,b,c,d,e,f;
            cin >> a >> b >>c >>d>>e>>f;
            double d1 = abs(c-a);
            double d2 = abs(d-b);
            double d3 = abs(e-a);
            double d4 = abs(f-b);
            double d5 = abs(e-c);
            double d6 = abs(f-d);
            double s1 = (sqrt(pow(d1,2.00)+pow(d2,2.00)));
            double s2 = (sqrt(pow(d3,2.00)+pow(d4,2.00)));
            double s3 = (sqrt(pow(d5,2.00)+pow(d6,2.00)));
            if (abs(s1-s2)<=1e-6||abs(s3-s2)<=1e-6||abs(s1-s3)<=1e-6) {
                double mid = s1+s2+s3-max(s1,max(s2,s3))-min(s1,min(s2,s3));
                double high = pow(max(s1,max(s2,s3)),2);
                double dummy = pow(min(s1,min(s2,s3)),2)+pow(mid,2);
                if (abs(dummy-high)<=1e-6) {
                    cout << "Isosceles right triangle\n";
                }
                else if (high<dummy) {
                    cout << "Isosceles acute triangle\n";
                }
                else {
                    cout << "Isosceles obtuse triangle\n";
                }
            }
            else {
                double mid = s1+s2+s3-max(s1,max(s2,s3))-min(s1,min(s2,s3));
                double high = pow(max(s1,max(s2,s3)),2);
                double dummy = pow(min(s1,min(s2,s3)),2)+pow(mid,2);
                if (abs(dummy-high)<=1e-6) {
                    cout << "Scalene right triangle\n";
                }
                else if (dummy>high) {
                    cout << "Scalene acute triangle\n";
                }
                else {
                    cout << "Scalene obtuse triangle\n";
                }
            }
        }
    }
    return 0;
}
