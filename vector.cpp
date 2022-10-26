#include <iostream>
#include <vector>

using namespace std;

// cach dung vector co ban
vector <int> v // khai bao 
v.push_back (100) // nhap
v.push_back (200)
cout << v.size() << endl; // in so phan tu
if(v.empty()) {
    cout << "Rong \n"; // ham empty check rong
}
v.clear(); // xoa het cac ptu
v.pop_back(); // xoa phan tu o cuoi
for (int i = 0; i < v.size(); i++) // duyet thong qua chi so cua mang
{
    cout << v[i] << ' ';
} 
for (int x : v) {
    cout << x << ' '; // duyet thong qua for each
}

int main () {
    int n; cin >> n;
    vector <int> v;
    for (int i = 0; i < n; i++){ 
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    for (int i = 0; i < n; i++){
        cout << v[i] << ' ';
    }
    // cach 2
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    for (int i = 0; i < n; i++){
        cout << v[i] << ' ';
    }
    // iterator
    for (vector <int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << ' '; // Dau * toan tu giai tham chieu
    }
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
    } 
    // duyet for each
    for (int x : v) {
        cout << x << ' ';
    }
    // them phan tu 
    v.insert(v.begin() + 2, 100); // them 100 vao chi so 2
    for (int x : v) {
        cout << x << ' ';
    }
    // xoa di mot phan tu
    v.erase(v.begin() + 3); // xoa ptu o vi tri 3
    v.pop_back(); // xoa ptu cuoi cung trong vector
    // giam bot so luong ptu
    v.resize(3);
    //  gan tat ca phan tu ve cung gia tri
    v.assign(6, 100); // gan 6 ptu dau tien
    // pair : kieu du lieu luu theo cap
    pair <int, int > p;
    p.first = 100;
    p.second = 300;
    // (100, 300)
    pair <int, int> p{100, 300};
    cout << p.first << " " << p.second << endl;
}
    // DE QUY: bai toan con nho nhat + cong thuc truy hoi
    int gt (int n) {
        if (n == 0)
           return 1;
        else
            return n * gt(n - 1);
    }

    int S(int n) {
        if (n == 0) 
            return 0;
        else
            return n + S(n - 1);
    }

    int fibo(int n) {
        if (n == 0 || n == 1) 
            return n;
        else
            return fibo(n - 1) + fibo(n - 2);
    }

    int nCk (int n, int k) {
        if (k == 0 || n == k) 
            return 1;
        else 
            return nCk(n - 1, k - 1) + nCk(n - 1, k);
    }

    long long gcd (long long a, long long b) {
        if (b == 0) return a;
        else return gcd(b, a % b);
    }

    long long lcm (long long a, long long b) {
        return a / gcd (a, b) * b;
    }

    long long 