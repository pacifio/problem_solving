#include<iostream>
using namespace std;

int main() {
	int t;cin >> t;
	while (t--) {
		int n;cin >> n;
		int x = n * 2;
		for (int i = 0; i < x/2; ++i) {
			for (int j=0;j<x;++j) {
				if (j > i && j < (x-1)-i) {
					cout << "#";
				}else {
					cout << "*";
				}
			}
			cout << "\n";
		}
		cout << "\n";
	}

	return 0;
}