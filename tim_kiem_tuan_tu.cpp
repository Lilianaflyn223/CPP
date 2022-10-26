#include <bits/stdc++.h>
using namespace std;

void nhap (int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k, check = -1;
        cin >> n >> k;
        nhap(n);
        for (int i = 0; i < n; i++) {
            if (a[i] == k) {
                check = i + 1;
                break;
            }
        }
        cout << check << endl;
    }
}