#include<iostream>
using namespace std;

void odd(int c, int n, int j) {
	int x = 0;
	if (n-j > 0) {
		x = n-j;
	}else {
		x = (n - (c-j) + 1);
	}
	cout << x << " ";
}

int main() {
	int n;cin >> n;
	int c = (n * 2) - 1;
	for (int i = 0; i < c; ++i) {
		for (int j = 0; j < c; ++j) {
			if (i > 0 && (j > 0 && j < c-1)) {
				if (n-i > 0) {
					if (j >= i  && j <= (c-1)-i) {
						cout << n-i << " ";
					}else {
						odd(c, n, j);
					}
				}else {
					int _i = (c-1) - i;
					int r = (i-n+2);
					if (j >= _i &&  j <= (c-1)-_i) {
						cout << r << " ";
					}else {
						odd(c, n, j);
					}
				}
			}else {
				cout << n << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}