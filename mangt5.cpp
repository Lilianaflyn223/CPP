#include <bits/stdc++.h>

using namespace std;

int check (int a[], int n) {
    int dem25 = 0, dem50 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 50) {
            if (dem25 == 0) return 0;
            else {
                --dem25;
                ++dem50;
            }
        }
        else if (a[i] == 25) ++dem25;
        else {
            if (dem25 * 25 + dem50 * 50 < 75) return 0;
            else {
                if (dem50 != 0) dem50--;
                else {
                    dem25 -= 3;
                }
            }
        }
    }
    return 1;
}

int main () {
    /* int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max = a[0];
    cout << a[0] << " ";
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            cout << a[i] << " ";
            max = a[i];
        }
    }
    */
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (check(a, n)) cout << "YES";
    else cout << "NO";
}