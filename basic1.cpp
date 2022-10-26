#include <iostream> 
#include <iomanip>
#include <math.h>

using namespace std;
/* tinh chu vi, dien tich hinh tron
int main () {
    int r;
    cin >> r;
    double chuvi = 2 * 3.14 * r;
    double dientich = 3.14 * r * r;
    cout << fixed << setprecision(4) << chuvi << " " << fixed << setprecision(4) << dientich << endl;
}

//tinh khoang cach Euclide
int main () {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double res = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    cout << fixed << setprecision(2) << res << endl;
}

int main () {
    int c;
    cin >> c;
    double f = (double)c * 9/5 + 32;
    cout << fixed << setprecision(2) << f << endl;
}
*/

int main () {
    /* tim so nho nhat ma lon hon hoac bang a chia het cho b va so lon nhat <= chia het cho b
    int a, b;
    cin >> a >> b; 
    int res1 = a / b * b ;
    int res2 = (a + b - 1) / b * b;
    cout << res1 << endl << res2 << endl;
    // chuyen doi ngay thang
    int n;
    cin >> n;
    cout << n / 365 << " " << (n % 365) / 7 << " " << (n % 365) % 7 << endl;
    
    //to hop chap 2
    int a;
    cin >> a;
    long long res = 1ll * a * (a - 1) / 2;
    cout << res << endl;

    //so phut con lai truoc khi sang nam moi
    int h,m;
    cin >> h >> m;
    cout << 1440 - h * 60 - m << endl;
    
    //tong hieu tich thuong
    int a,b;
    cin >> a >> b;
    int tong = a + b, hieu = a - b;
    long long tich = 1ll * a * b;
    cout << tong << endl << hieu << endl << tich << endl;
    if (b == 0) {
        cout << "INVALID\n";
    }
    else {
        cout << fixed << setprecision(4) << (double) a / b << endl;
    }
    
    //kiem tra cau dieu kien
    int n;
    if (n % 2 == 0) cout << "YES\n";
    else cout << "NO\n";
    if (n % 3 == 0 && n % 5 == 0) cout << "YES\n";
    else cout << "NO\n";
    if (n % 3 == 0 && n % 7 != 0) cout << "YES\n";
    else cout << "NO\n";
    if (n % 3 == 0 || n % 7 == 0) cout << "YES\n";
    else cout << "NO\n";
    if (n > 30 && n < 50) cout << "YES\n";
    else cout << "NO\n";
    if (n >= 30 && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)) cout << "YES\n";
    else cout << "NO\n";
    if (n >= 10 && n <= 99 && (n % 10 == 2 || n % 10 == 3 || n % 10 == 5 || n % 10 == 7)) cout << "YES\n";
    else cout <<"NO\n";
    if (n <= 100 && n % 23 == 0) cout << "YES\n";
    else cout << "NO\n";
    if (n < 10 || n > 20) cout << "YES\n";
    else cout << "NO\n";
    if ((n % 10) % 3 == 0) cout << "YES\n";
    else cout << "NO\n";
    
    // kiem tra nam nhuan
    int n;
    cin >> n;
    if (n % 4 == 0 && n % 100 != 0) cout << "YES\n";
    else cout << "NO\n";
    
    // kiem tra tam giac
    int a,b,c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b) cout << "YES\n";
    else cout << "NO\n";
    
    // kiem tra tam giac deu, can, vuong
    int a,b,c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b) {
        if (a == b && b == c) cout << "1";
        else if (a == b || b == c || a == c) cout << "2";
        else if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b) cout << "3";
        else cout << "4";
    }
    else cout << "INVALID"; 
    // kiem tra thang co bao nhieu ngay
    int a,b;
    cin >> a >> b;
    if (a >= 0 && a <= 12 && b > 0) {
        if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12) {
            cout << "31";
        }
        else if (a == 4 || a == 6 || a == 9 || a == 11) cout << "30";
        else {
            if ((t % 4 && t % 100) || t % 400) cout << "29";
            else cout << "28";
        }
    }
    // kiem tra ki tu in hoa, thuong
    char c;
    cin >> c;
    if (c >= 97 && c <= 122) cout << "LOWER";
    else if (c >= 65 && c <= 90) cout << "UPPER";
    else if (c >= 48 && c <= 57) cout << "DIGIT";
    else cout << "SPECIAL";
    
    // chuyen in hoa sang in thuong va nguoc lai
    char c;
    cin >> c;
    if (c >= 97 && c <= 122) {
        cout << (char) (c - 32);
    }
    else if (c >= 65 && c <= 90) {
        cout << (char) (c + 32);
    }
    else cout << c;
    

    char c;
    cin >> c;
    if (c >= 65 && c < 90) cout << (char) (c + 33);
    else if (c >= 97 && c < 122) cout << (char) (c + 1);
    else if (c == 122 || c == 90) cout << "a";

    float a, b, c, d, tongKet;
    cin >> a >> b >> c >> d;
    tongKet = 1ll * (a + b + c*2 + d*3) / 7;
    if (tongKet >= 8) cout << "GIOI";
    else if (tongKet >= 6.5 && tongKet < 8) cout << "KHA";
    else if (tongKet >= 5 && tongKet < 6.5) cout << "TRUNG BINH";
    else cout << "YEU";

    // domino
    int m,n;
    cin >> n >> m;
    if (n % 2 == 0) cout << 1ll * n / 2 * m;
    else cout << 1ll * n / 2  * m + m / 2;

    // lat gach quang truong da a*a m^3
    int n, m, a;
    int doc, ngang;
    cin >> n >> m >> a;
    if (n % a == 0) doc = n / a;
    else doc = n / a + 1;
    if (m % a == 0) ngang = m / a;
    else ngang = m / a + 1;
    cout << 1ll * doc * ngang;
    
    // frog
    int r, l, k;
    cin >> r >> l >> k;
    if (k % 2 == 0) {
        cout << 1ll * (k / 2) * r - 1ll * (k / 2) * l;
    }
    else cout << 1ll * (k / 2 + 1) * r - 1ll * (k / 2) * l;
    
    // mua nuoc
    using ll = long long;
    ll n, a, b;
    cin >> n >> a >> b;
    if (1ll * 2 * a < b) cout << 1ll * a * n;
    else {
        if (n % 2 == 0) cout << n / 2 * b;
        else cout << n / 2 * b + a;
    }
    
    // dong xu toi thieu
    int n;
    long long s;
    cin >> n >> s;
    if (s % n == 0) cout << s / n;
    else cout << s / n + 1;

    // doremon leo cau thang
    int n,m;
    cin >> n >> m;
    int min, max = n;
    
    if (n % 2 == 0) min = n / 2;
    else min = n / 2 + 1;
    // => gia tri nho nhat chia het cho m
    int ans = (min + m - 1) / m * m;
    if (ans <= max) cout << ans;
    else cout << "-1\n";

    // duong di ngan nhat
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int kc1 = d1 + d2 + d3;
    int kc2 = 2 * (d2 + d3);
    int kc3 = 2 * (d1 + d2);
    int kc4 = 2 * (d1 + d3);
    cout << min ({kc1, kc2, kc3, kc4}); 

    int n; // doi tien 
    cin >> n;
    int ans = 0;
    ans += n / 100;
    n %= 100;
    ans += n / 20;
    n %= 20;
    ans += n / 10;
    n %= 10;
    ans += n / 5;
    n %= 5;
    ans += n / 1;
    cout << ans;

    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max ({a,b,c,d}) << " " << min ({a,b,c,d}) << endl;

    long long n, u1, d;
    cin >> n >> u1 >> d;
    long long un;
    un = u1 + (n - 1) * d;
    cout << (un + u1) * n / 2;  

    int a, b, c ,d;
    cin >> a >> b >> c >> d;
    if ((b / a == c / b) && (c / b == d / c)) cout << "YES";
    else cout << "NO";
    
    // vong lap
    int n;
    long long sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    cout << sum;
    
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += pow(i, 2);
    } 
    cout << sum;
    
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    cout << sum;
    
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum +=  1 /(double)i;
    }
    cout << fixed << setprecision (3) << sum;

    // tinh tong cac uoc
    long long n, sum = 0;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            if (n / i != i) sum += n / i;
        }
    }
    cout << sum;

    // liet ke uoc nguyen to
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i * i<= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (n / i != i) cnt++;
            
        }
    }
    cout << cnt << endl;
    for (int i = 1; i <= n; i ++) {
        if (n % i == 0) cout << i << " ";
    }

    // Liet ke so chinh phuong
    long long n;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++) {
        cin << i * i << " ";
    }

    // kiem tra 2022
    int n, a, flag = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 2022) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) cout << "YES";
    else cout << "NO";

    // tong chan le
    int n;
    long long sum = 0;
    cin >> n;ß
    for (int i = 1; i <= n; i++) {
        sum += pow((-1), i*i);
    }
    cout << sum;

    // tong boi 2
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 2 * i;
    }
    cout << sum;

    // dem chu so cua n
    long long n;
    cin >> n;
    int cnt = 0;
    if (n >= 0 && n < 10) {
        cout << "1";
    }
    else {
        while (n > 0) {
        n /= 10;
        cnt ++;
    }
    cout << cnt;
    }

    // tong cac chu so cua n
    long long n;
    cin >> n;
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    if (n > 0 && n < 10) sum += n;
    cout << sum;

    // dem so luong so la so nguyen to
    long long n;
    cin >> n;
    int digit, cnt = 0;
    while (n > 0) {
        digit = n % 10;
        n /= 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7) cnt++;
    }
    if (n != 0) {
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7) cnt++;
    }
    cout << cnt;

    // ve hinh
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl; 
    }
    cout << endl;
    
    for (int m = 1; m <= n; m++) {
        for (int k = 1; k <= n; k++) {
            if (m == 1 || k == 1 || m == n || k == n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int m = 1; m <= n; m++) {
        for (int k = 1; k <= n; k++) {
            if (m == 1 || k == 1 || m == n || k == n) cout << "*";
            else cout << "#";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int m = 1; m <= n; m++) {
        for (int k = 1; k <= n; k++) {
            if (m == 1 || k == 1 || m == n || k == n) cout << m << " ";
            else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // ve hinh 2
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j > 0; j--) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        int init = i;
        for (int j = 1; j <= n; j++) {
            if (j > n - init) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < i) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == 1 || j == 1 || i == n || j == n || j == i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    // ve hinh 3
    int n;
    cin >> n;
    int init = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << init << " ";
            init++;
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= n; i++) {
        int init = i;
        for (int j = 1; j <= n; j++) {
            cout << init << " ";
            init++;
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= n; i++) {
        int init = i;
        for (int j = 1; j <= n; j++) {
            if (j > n - init) cout << init;
            else cout << "~";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= n; i++) {
        int init = i;
        int kc = n - 1;
        for (int j = 1; j <= i; j++) {
            cout << init << " ";
            init += kc;
            kc--;
        }
        cout << endl;
    }
    
    // viet ham kiem tra so thuan nguyen to
    int n;
    cin >> n;
    
    // viet ham check so chinh phuong
    long long n; 
    cin >> n;
    long long res = sqrt(n);
    if (res * res == n) cout << "YES";
    else cout << "NO";
    return 0;
    
    // in so chinh phuong trong doan
    long long a, b;
    cin >> a >> b;
    int can1 = ceil (sqrt(a)), can2 = sqrt(b);
    for (int i = can1; i <= can2; i++) {
        cout << 1ll * i * i << " ";
    }
    return 0;

    // dem so chinh phuong trong doan
    long long a, b;
    cin >> a >> b;
    int can1 = ceil(sqrt(a)), can2 = sqrt(b);
    cout << can2 - can1 + 1;

    // tim ucln
    int ucln (int a, int b) {
        while (b != 0) {
            int du = a % b;
            a = b;
            b = du;
        }
        return a;
    }
    cout << ucln (25, 15);
    cout << __gcd (25, 15);

    // fibonacci
    long long fibo (int n) {
        // truong hop so fibo can tim la so dau tien
        if (n == 0 || n == 1) return n;
        long long fn, f1 = 1, f2 = 0;
        for (int i = 2; i <= n; i++) {
            fn = f1 + f2;
            // dich f1, f2 sang phai
            f2 = f1;
            f1 = fn;
        }
        return fn;
    }

    // phan tich thua so nguyen to
    void pt (int n) {
        for (int i = 2; i <= sqrt (n); i++) {
            if (n % i == 0) {
                while (n % i == 0) {
                    cout << i << " ";
                    n /= i;
                }
            }
        }
        if (n != 1) cout << n;
    }

    // cap so nguyen to cung nhau
    int gcd (int a, int b) {
        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }

    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        for (int j = i +1; j <= b; j++) {
            if (gcd (i,j) == 1) cout << i << " " << j;
        }
    }

    
    // uoc nguyen to nho nhat
    int pt (int n) {
        int min = 1e9;
        if (n == 1) return 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                while (n % i == 0) {
                    n /= i;
                }
                if (i < min) min = i;
            }
        }
        if (n > 1 && min > n) min = n;
        return min;
    }
    

    // phan tich thanh thua so ngto

    long long n;
    cin >> n;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int mu = 0;
            while (n % i == 0) {
                ++mu;
                n /= i;
            }
            cout << i << "^" << mu << " ";
            if (n != 1) cout << "*" << " ";
        }  
    }
    if (n != 1) cout << n << "^1";
    return 0;

    // so Sphenic
    bool pt (long long n) {
    int r = 0;
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                int cnt = 0;
                while (n % i == 0) {
                    ++cnt;
                    n /= i;
                }
                if (cnt != 1) return false;
                else if (cnt == 1) ++r;
            }
        }
     if (n != 1) ++r;
     return r == 3;
    }

    // viet ham quan trong
    int nto (int n) {
        if (n < 2) return false;
        for (int i = 2; i *  i <= n; i++) {
            if (n % i == 0) return 0;
        }
        return 1;
    }

    int ham1 (int n) {
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int ham2 (int n) {    // chu so chia het cho 2
        int sum = 0;
        while (n != 0) {
            if (n % 10 % 2 == 0) {
                sum += n % 10;
            }
            n /= 10;
        }
        return sum;
    }

    int ham3 (int n) {
        int sum = 0;
        while (n) {
            int r = n % 10;
            if (r == 2 || r == 3 || r == 5 || r == 7) {
                sum += r;
            }
            n /= 10;
        }
        return sum;
    }

    int ham4 (int n) {
        int lat = 0;
        while (n) {
            lat = lat * 10 + n % 10;
            n /= 10;
        }
        return lat;
    }

    int ham6 (int n) {
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0 && nto(i)) {
                cnt++;
            } 
        }
        return cnt;
    }

    int ham7 (int n) {
        for (int i = n; i >= 1; i--) {
            if (n % i == 0 && nto(i)) return i; 
        }
        return 1;
    }

    int ham8 (int n) {
        while (n) {
            if (n % 10 == 6) return 1;
            n /= 10;
        }
        return 0;
    }

    int ham9 (int n) {
        int sum = 0;
        while (n) {
            sum += n % 10;
            n /= 10;
        }
        if (sum % 8 == 0) return 1;
        else return 0;
    }

    int gt (int n) {
        int r = 1;
        for (int i = 1; i <= n; i++) {
            r *= i;
        }
        return r;
    }

    int ham10(int n) {
        int sum = 0;
        while (n) {
            sum += gt(n % 10);
            n /= 10;
        }
        return sum;
    }

    int ham11 (int n) {  // tat ca cac chu so giong nhau
        int r = n % 10;
        while (n) {
            if (n % 10 != r) return 0;
            n /= 10;
        }
        return 1;
    }

    int ham12 (int n) {
        int r = n % 10;
        while (n) {
            if (n % 10 > r) return 0;
            n /= 10;
        }   
        return 1;
    }

    int demcs (int n) {
        int cnt = 0;
        while (n) {
            ++cnt;
            n /= 10;
        }
        return cnt;
    }

    int ham13 (int n) {
        int sum = 0;
        int d = demcs(n);
        while (n) {
            sum += (int) pow (n % 10, d);
            n /= 10;
        }
        return sum;
    }
    // so dep neu chia het cho mot so nto va binh phuong
    bool sodep (int n) {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                int mu = 0;
                while (n % i == 0) {
                    ++mu;
                    n /= i;
                }
                if (mu >= 2) return true;
            }
        }
        return false;
    }

    // so Smith
    int sum (int n) {
        int ans = 0;
        while (n) {
            ans += n % 10;
            n /= 10;
        }
        return sum;
    }

    bool Smith (int n) {
        int sum1 = sum (n);
        int sum2 = 0;
        int tmp = n;
        for (int i = 2; i * i <= n; i++) {
            while (n % i == 0) {
                sum2 += sum(i); // tinh tong cac chu so cua thua so nguyen to i
                n /= i;
            }
        }
        if (tmp == n) return false;
        if (n != 1) sum2 += sum(n);
        return sum1 == sum2;
    }

    // so dep 2
    bool sodep (int n) {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                int mu = 0;
                while (n % i == 0) {
                    mu++;
                    n /= i;
                }
            }
        }
    }

    // sang so ngto
    bool prime[1000001];

    void sang() {
        // buoc 1: Coi tat ca cac so tu 0 toi n deu la so nguyen to
        // prime[i] = true : [0,n]
        for (int i = 0; i <= 1000000; i++) {
            prime[i] = true;
        }

        // buoc 2: sang
        prime[0] = prime[1] = false;
        for (int i = 2; i <= sqrt (1000000); i++) {
            if (prime[i]) {
                for (int j = i * i; j <= 1000000; j+=i) {
                    prime[j] = false
                }
            }
        }
    }

    for (int i = 0; i <= 10000; i++) {
        if (prime[i] == 1) {
            cout << i << ' ';
        }
    }
    */

}