#include <bits/stdc++.h>

using namespace std;

struct ThiSinh {
    string name;
    string dob;
    float s1;
    float s2;
    float s3;
};

void nhap (ThiSinh &A) {
    getline(cin, A.name);
    getline(cin, A.dob);
    cin >> A.s1;
    cin >> A.s2;
    cin >> A.s3;
}

void in (ThiSinh &A) {
    cout << A.name << " " << A.dob << " " << fixed << setprecision(1) << A.s1 + A.s2 + A.s3;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}