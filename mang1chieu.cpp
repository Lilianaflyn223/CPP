#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

// chua bai tap mang 1 chieu

using namespace std;

int prime[1000000];

void sang () {
    for (int i = 1; i <= 1000000; i++) {
        prime[i] = 1;
    }

    prime[0] = prime[1] = 0;

    for (int i = 2; i <= sqrt(1e6); i++) {
        if(prime[i]) {
            for (int j = i * i; j <= 1000000; j += i){
                prime[j] = 0;
            }
        }
    }
}

int main () {
    // T - prime (m) so co dung 3 uoc so
    // n = p1 ^ e1 * p2 ^ e2 * .... pk ^ ek
    // tinh so luong uoc t(n) = (e1 + 1)(e2 + 1)...(ek + 1)
    long long n;
    cin >> n;
    void sang();
    int dem;
    for (int i = 1; i <= sqrt(n); i++) {
        if (prime[i]) {
            ++dem;
        }
    }
    cout << dem;

    // dem uoc cua so chia du
    int t; cin >> t;
    long long res = 1;
    for (int i = 0; i < t; i++) {
        int p, e;
        cin >> p >> e;
        res *= (e + 1);
        res %= 1000000007;
    }
    cout << res << endl;
}
    // bac cua thua so nto trong n!
    long long solve (long long n, long long p) {
        long long ans = 0;
        for (long long i = p; i <= n; i *= p) { // legandre
            ans += n / i;
        }
        return ans;
}

    // dem chu so 0 tan cung cua n
    long long dem (long long n) {
        long long ans = 0;
        for (long long i = 5; i <= n; i *= 5) {
            ans += n / i;
        }
        return ans;
    }

    // kiem tra mang tang dan
    bool check  (int a[], int n) {
        for (int i = 1; i <n; i++) {
            if (a[i] <= a[i - 1]) return false;
        }
        return true;
    }

    // chen phan tu x vao vi tri pos
    void chen(int n, int x) {
        int a[n +1];
        int pos;
        cin >> pos;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = n; i > pos; i--) {
            a[i] = a[i - 1];
        }
        a[pos] = 100;
        ++n; // tang so luong mang them 1 vi chen vao mang 1 so
        for (int i = 0; i < n; i++) {
            cout << a[i] << ' ';
        }
    }
        // in ra cac so lon hon cac so dung truoc
        void solon (int n) {
            int a[n];
            for (int i = 0; i < n; i ++) {
                cin >> a[i];
            }
            int max = 1e9;
            for (int i = 0; i < n; i++) {
                if (a[i] > max) {
                    cout << a[i] << " ";
                    max = a[i];
                }
            }
        }

        // kiem tra xem co du tien tra lai
        bool check (int a[], int n) {
            int dem25 = 0, dem50 = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] == 25) ++dem25;
                else if (a[i] == 50) {
                    if (dem25 == 0) return false;
                    --dem25;
                    ++dem50;
                }
                else {
                    // khi nao khong tra lai duoc tien
                    if (dem25 == 0 || (dem25 * 25 + dem50 * 50 < 75)) return false;
                    if (dem50 != 0) {
                        --dem50;
                        --dem25;
                    }
                    else {
                        dem25 -= 3;
                    }
                }
            }
            return true;
        }

        // gui thu
        void tpho(int n) {
            int a[n];
            for (int i = 0; i < n; i++) {
                cin >> n;
            }
            for (int i = 0; i < n; i++) {
                if (i == 0) {
                    cout << a[1] - a[0] << ' ' << a[n - 1] - a[0];
                }
                else if (i == n - 1) {
                    cout << a[n - 1] - a[n - 2] << ' ' << a[n - 1] - a[0];
                }
                else {
                    cout << min(a[i + 1] - a[i], a[i] - a[i - 1]) << ' ' << max(a[n - 1] - a[i], a[i] - a[0]); 
                }
        }
        }
        // in cap so nto cung nhau : 2 so nto cung nhau la 2 so nto co gcd la 1
        void nto_cnhau (int n) {
            int a[n];
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (__gcd(i,j) == 1) cout << i << ' ' << j << ' ';
                }
            }
        }

        // doi tien tham lam
        void doi_tien (long long n) {
            int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2} {
                long long res = 0;
                for (int i = 0; i < 10; i++) {
                    res += n / a[i];
                    n %= a[i];
                }
                cout << res << endln;
            }
        }

