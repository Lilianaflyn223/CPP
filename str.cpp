#include <bits/stdc++.h>

using namespace std;

int main () {
    string name;
    // cin >> name;
    getline(cin, name);
    for (int i = 0; i < name.length(); i++) {
        name[i] = tolower(name[i]);
    }
    vector <string> v;
    stringstream ss(name);
    string tmp;
    while (ss >> tmp) v.push_back(tmp);
    cout << v[v.size() - 1];
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i][0];
    }
    cout << "@ptit.edu.vn";
}