#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int sum = 0;
		while (n>0) {
			int  x = n % 10;
			sum = sum + x;
			n = n / 10;
		}

		cout << sum << endl;
	}

	return 0;
}