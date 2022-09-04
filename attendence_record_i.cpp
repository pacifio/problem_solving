#include<iostream>
using namespace std;

int main() {
	string s;cin >> s;
	int absent = 0;
	bool late = false;
	for (int i = 1; i <= s.size(); ++i) {
		if (s[i-1] == 'A') {
			absent++;
		}

		if (s[i-1] == 'L' and s[i] == 'L') {
			if (i+1 <= s.size()) {
				if (s[i+1] == 'L') {
					late = true;
					break;
				}
			}
		}
	}

	if (absent >= 2 or late) {
		cout << "false" << endl;
	}else {
		cout << "true" << endl;
	}

	return 0;
}