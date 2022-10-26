#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    while (t--) {
        string c;
        cin >> c;
        for (int i = 0; i < c.length() - 2; i++) {
        if (c[i] == '0' && c[i + 1] == '8' && c[i + 2] == '4') {
            c[i] = c[i + 1] = c[i + 2] = 'x';
        }
      }
        for (int i = 0; i < c.length(); i++) {
        if (c[i] == 'x')
        cout << c[i] << endl;
       }
    }
}