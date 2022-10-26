#include <iostream>

using namespace std;



int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        for (int i = 2; i * i <= n; i++) {
                while (n % i == 0) {
                    n /= i;
                    cnt++;
                    if (cnt == k) {
                      cout << i << endl;
                      break;
                   }
                }
                if (n == i) break;
                if (cnt >= k) break;
            }
            
        if (n != 1) cnt++; 
        if (cnt == k) cout << n << endl;
        if (cnt < k) cout << "-1" << endl;
    }
}