#include <bits/stdc++.h> 
using namespace std;

int main () {
   int t, step = 0;
   cin >> t;
   int l = pow (10, t - 1);
   int r = pow (10, t) - 1;
   for (int i = l; i <= r; i++) {
    int cnt = 0;
    int x = i;
    while (x > 0) {
        int m = x % 10;
        x /= 10;
        if (m % 2 == 0) {
            cnt++;
        }
    }
    if (cnt == t / 2) {
        ++step;
        cout << i << ' ';
        if (step == 10) {
            cout << endl;
            step = 0;
        }
    }
   }
}