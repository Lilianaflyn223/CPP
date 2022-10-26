#include <bits/stdc++.h>

using namespace std;

struct MonHoc {
    string ma;
    string ten;
    int tc;
    int diemCC;
    int diemKT;
    int diemThi;
}

struct SinhVien {
    string ma;
    string ten;
    string lop;
}

void readMH(Monhoc &mh) {
        cin >> mh[i].ma;
        cin.ignore();
        getline(cin, mh[i].ten);
        cin >> mh[i].tc;
        cin >> mh[i].diemCC;
        cin >> mh[i].diemKT;
        cin >> mh[i].diemThi;
}

void printMH(MonHoc &mh) {
        cout << mh[i].ma << \t;
        cout << mh[i].ten << \t;
        cout << mh[i].tc << \t;
        cout << mh[i].diemCC << \t;
        cout << mh[i].diemKT << \t;
        cout << mh[i].diemThi << \t;
}

int main () {
    int n, m;
    cin >> n >> m;
    MonHoc mh[n];
    for (int i = 0; i < n; i++) {
        readMH(mh[i]);
    }
    for (int i = 0; i < n; i++) {
        printMH(mh[i]);
    }
}