#include<bits/stdc++.h>

using namespace std;


int main() {
	string s;
	getline(cin,s);
	for(int i = 0; i< s.length(); i++) {
		if(isupper(s[i])) {
			if(s[i] == 'Y' || s[i] == 'Z') {
				s[i] -= 24;
			}
			else {
				s[i]+=2;
			}
		}
		if(islower(s[i])) {
			if(s[i] == 'a' || s[i] == 'b') {
				s[i] += 24;
			}
			else {
				s[i] -=2;
			}
		}
	}
	cout << s;
	return 0;
}