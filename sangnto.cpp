#include <iostream>
#include <cmath>

using namespace std;
/*
int prime [10000007];

void sang() {
    for (int i = 0; i < 10000000; i++) {
        prime [i] = 1;
    }
    prime [0] = prime [1] = 0;
    for (int i = 0; i * i < 10000000; i++) {
        if (prime[i] == 1) {
            for (int j = i * i; j <= 1000000; j += i) {
                prime[j] = 0;
            }
        }
    }
}

int main () {
    int n;
    cin >> n;
    sang();
    if (prime[n] == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}
*/

bool check (int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main () {
    int n;
    cin >> n;
    if (check(n)) cout << "YES";
    else cout << "NO";
}