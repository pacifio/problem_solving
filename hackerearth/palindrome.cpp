#include<iostream>
using namespace std;

int main() {
	string s, res;cin >> s;
	for (int i = s.size()-1; i >= 0; --i) {
		res.push_back(s[i]);
	}
	if (res == s) {
		cout << "YES";
	}else {
		cout << "NO";
	}

	return 0;
}