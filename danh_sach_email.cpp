#include <bits/stdc++.h>
using namespace std;

void solve (string &s) {
    for (int i=0; i<s.size(); i++) {
        if (s[i] >='A' && s[i] <= 'Z')  s[i] += 32;
    }
}
void solution (char *f) {
    ifstream fp;
    fp.open(f);
    string token;
    set<string> ans;
    while (getline(fp, token)) {
        solve(token);
        ans.insert(token);
    }
    for (auto i:ans) 
        cout << i << endl;
}
int main () {
    solution ("CONTACT.in");
    return 0;
}