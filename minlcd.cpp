#include <bits/stdc++.h>

using namespace std;

bool nto(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            if (i == 1) cout << "1" << " ";
            else if (i % 2 == 0) cout << "2" << " ";
            else if (i % 3 == 0) cout << "3" << " ";
            else if (i % 5 == 0) cout << "5" << " ";
            else if (i % 7 == 0) cout << "7" << " ";
            else if (nto(i) == true) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}