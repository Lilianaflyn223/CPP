#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    bool want_to_break = false;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int check = 0;
        for (int i = 0; !want_to_break && (i < n ); i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[j] == a[i]) {
                    check = 1;
                    cout << a[j];
                    want_to_break = true;
                    break;
                }
            }
        }
        if (check == 0) cout << "NO";
        cout << endl;
    }
}