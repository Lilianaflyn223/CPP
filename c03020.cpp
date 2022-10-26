#include <bits/stdc++.h>

using namespace std;

int charToNum (char x) {
    return x -= 48;
}

char numToChar (long long x) {
    return x += 48;
}

string add (string a, string b) {
    string result = "";
    while (a.length() < b.length()) {
        a = '0' + a;
    }
    while (a.length() > b.length()) {
        b = '0' + b;
    }
    int m = 0;
    for (int i = a.length() - 1; i >= 0; i--) {
        int ad = charToNum(a[i]);
        int bd = charToNum(b[i]);
        int s = ad + bd + m;
        if (s >= 10) {
            m = s / 10;
            s = s % 10;
        }
        else {
            m = 0;
        }
        result = numToChar(s) + result;
    }
    if (m > 0) {
        result = numToChar(m) + result;
    }
    return result;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << add(a, b) << endl;
    }
}