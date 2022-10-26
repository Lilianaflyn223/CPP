#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
    /*
   int n;
   cin >> n;
   double sum = 0;
   for (int i = 1; i <= n; i++) {
    sum += 1 / (double) i;
   }
   cout << fixed << setprecision(4) << sum << endl;
   
   int n;
   cin >> n;
   long long s = 0, giaiThua = 1;
   for (int i = 1; i <= n; i++) {
     giaiThua *= i * 1ll;
     s += giaiThua;
   }
   cout << s << endl;
  
   int t;
   cin >> t;
   while (t--) {
    int n;
    cin >> n;
    int digit, flag = 1;
    while (n) {
        digit = n % 10;
        if (digit != 0 && digit != 6 && digit != 8) flag = 0;
        else flag = 1;
        n /= 10;
    }
    if (flag == 0) cout << "NO" << endl;
    else cout << "YES" << endl;
   }
   

   int t;
   cin >> t;
   while (t--) {
    long long n;
    cin >> n;
    long long m = 1;
    while (n) {
        m = m * 10 + n % 10;
        n /= 10;
    }
    if (m == n) cout << "YES" << endl;
    else cout << "NO" << endl;
   }
   
   int t;
   cin >> t;
   while (t--) {
    long long n;
    cin >> n;
    long long r = 0, m = n;
    while (n) {
     r = r * 10 + n % 10;
     n /= 10;
   }
   if (r == m) cout << "YES" << endl;
   else cout << "NO" << endl;
   }
   
   int t;
   cin >> t;
   while (t--) {
    double a1, b1, a2, b2;
    cin >> a1 >> b1;
    cin >> a2 >> b2;
    double kc = sqrt(pow(a1-a2, 2) + pow(b1-b2, 2));
    cout << fixed << setprecision(4) << kc << endl;
   }
   
   int t;
   cin >> t;
   while (t--) {
    int n;
    cin >> n;
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        int dem = 0;
        while (n % i == 0) {
          ++dem;
          n /= i;
        }
        cout << i << ' ' << dem << ' ';
      }
    }
    if (n != 1) cout << n << ' ' << 1 << endl;
   }
   */
 }