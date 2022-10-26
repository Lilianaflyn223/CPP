#include <bits/stdc++.h>

using namespace std;

#define pb push_back;

int main () {
    vector <long long> F;
    F.push_back(0);
    F.push_back(1);
    int index = 0;
    long long n1 = 0, n2 = 1, n3;
    while (index <= 89) {
        n3 = n1 + n2;
        F.push_back(n3);
        n1 = n2;
        n2 = n3;
        index++;
    }
    int t;
    long long n;
    cin >> t;
    while (t--) {
        cin >> n;
        if(binary_search(F.begin(), F.end(), n)) cout << "YES\n";
        else cout << "NO\n";
    }
}