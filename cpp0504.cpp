#include <bits/stdc++.h>

using namespace std;

struct SinhVien {
    string name;
    string class1;
    string dob;
    double score;
};

void nhap (SinhVien &a) {
    getline(cin, a.name);
    getline(cin, a.class1);
    getline(cin, a.dob);
    cin >> a.score;
    if (a.dob[1] == '/') {
        a.dob = "0" + a.dob;
    }
    if (a.dob[4] == '/') {
        a.dob.insert(3, "0");
    }
}

void in (SinhVien &a) {
    cout << "B20DCCN001" << " " << a.name << " " << a.class1 << " " << a.dob << " " << fixed << setprecision(2) << a.score;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}