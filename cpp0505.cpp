#include <bits/stdc++.h>

using namespace std;

struct NhanVien {
    string last_name;
    string first_name;
    string dob;
    string location;
    string tax_num;
    string day;
};

void nhap (NhanVien &a) {
    getline(cin, a.last_name);
    getline(cin, a.first_name);
    getline(cin, a.dob);
    getline(cin, a.location);
    getline(cin, a.tax_num);
    getline(cin, a.day);
    if (a.dob[1] == '/') {
        a.dob = "0" + a.dob;
    }
    if (a.dob[4] == '/') {
        a.dob.insert(3, "0");
    }
    if (a.day[1] == '/') {
        a.day = "0" + a.day;
    }
    if (a.day[4] == '/') {
        a.day.insert(3, "0");
    }
}

void in (NhanVien &a) {
    cout << "00001" << " " << a.last_name << " " << a.first_name << " " << a.dob << " " << a.location << " " << a.tax_num << " " << a.day;
    }

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}