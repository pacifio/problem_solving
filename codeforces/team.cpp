#include<iostream>
using namespace std;

int main() {
	int t;cin >> t;int r = 0;
	cin.ignore();
	while (t--) {
		string s;getline(cin, s);int count = 0;
		for (int i = 0; i < s.size();++i) {
			if (s[i] == '1') {
				count++;
			}
		}

		if (count >= 2) {
			r++;
		}
	}

	cout << r << endl;

	return 0;
}