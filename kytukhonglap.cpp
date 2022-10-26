#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        string c;
        cin >> c;
        int size = c.length();
        int b[size];
        for(int i = 0; i < size; i++)
        {
            b[i] = 1;
        }
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                if (c[j] == c[i]) {
                    b[i]++;
                    b[j] = 0;
                }
            }
        }
        for (int i = 0; i < size; i++) {
            if (b[i] == 1) cout << c[i];
        }
        cout << endl;
   }
}