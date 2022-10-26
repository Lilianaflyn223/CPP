#include <bits/stdc++.h>
using namespace std;

bool bs (int a[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == x) return true;
        else if (a[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (bs(a, n, x)) {
            cout << "1\n";
        }
        else cout << "-1\n";
    }
}