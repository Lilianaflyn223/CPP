#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

struct PhanSo {
    long long ps;
    long long ms;
};

void nhap (PhanSo &A) {
    cin >> A.ps;
    cin >> A.ms;
}

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void rutgon (PhanSo &A) {
    long long mau = gcd(A.ps, A.ms);
    A.ps = A.ps / mau;
    A.ms = A.ms / mau;
}

void in (PhanSo A) {
    cout << A.ps << "/" << A.ms;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}