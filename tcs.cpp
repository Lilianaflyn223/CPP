#include <bits/stdc++.h>

using namespace std;

int sum (int n) {
    int s = 0;
    while (n) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int r = sum(n);
        while (r > 9) { 
            r = sum(r);
        }
        cout << r << endl;
    }
}