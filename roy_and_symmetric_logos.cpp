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

		int _n;

		if (n%2 == 0) {
			_n = n/2;
		}else {
			_n = n/2 + 1;

		}

		bool match = false;
		for (int i = 0;i<n;++i) {
			if (a[i].substr(0, _n) == rev(a[i].substr(_n, n-1))) {
				match = true;
			}else {
				match = false;
				break;
			}

		}

		cout << match << endl;

		// int _n = n/2;
		// for (int i=0;i<_n;++i) {
		// 	for(int j=_n;j<n;++j) {
		// 		// cout << a[i] << " " << a[j] << endl;
		// 		cout << a[i] << endl;
		// 	}
		// 	cout << endl;
		// }

		// bool match = false;
		// for (int i=0;i<n;++i) {
		// 	if (a[i] == a[(n-1)-i]) {
		// 		match = true;
		// 	}else {
		// 		match = false;
		// 	}
		// }

		// if (match) {
		// 	cout << "YES" << endl;
		// }else {
		// 	cout << "NO" << endl;
		// }
	}
}