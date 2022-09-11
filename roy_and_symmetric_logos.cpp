#include<iostream>
using namespace std;

string rev(string str) {
	string result;
	for(int i=str.size()-1;i>=0;--i) {
		result.push_back(str[i]);
	}
	return result;
}

int main() {
	int t;cin >> t;
	while(t--) {
		int n;cin >> n;
		string a[n];
		for (int i=0;i<n;++i) {
			cin >> a[i];
		}

		bool rowmatch = false;
		for (int i = 0;i<n;++i) {
			if (a[i].substr(0, n/2) == rev(a[i].substr(((n%2 == 0) ? (n/2) : (n/2)+1), n-1))) {
				rowmatch = true;
			}else {
				rowmatch = false;
				break;
			}

		}

		bool colmatch = false;
		for(int i=0;i<n;i++) {
			if (a[i] == a[(n-1)-i]) {
				colmatch = true;
			}else {
				colmatch = false;
				break;
			}
		}


		if (rowmatch and colmatch) {
			cout << "YES" << endl;
		}else {
			cout << "NO" << endl;
		}
	}
}