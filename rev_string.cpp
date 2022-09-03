#include<iostream>
using namespace std;

int main() {
	string s, res;cin >> s;
	for (int i = s.size()-1; i >= 0; --i) {
		res.push_back(s[i]);
	}

	cout << res << ndl;

	return 0;
}