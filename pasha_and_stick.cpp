#include<iostream>
using namespace std;

int main() {
	int t;cin >> t;
	if (t%2 != 0) {
		cout << 0 << endl;
	}else  {
		if (t%4 == 0) {
			cout << t/4-1 << endl;
		}else {
			cout << t/4 << endl;
		}
	}
}