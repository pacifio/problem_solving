#include<iostream>
using namespace std;

int main() {
	int t,x;cin >> t;
	while(t--) {
		string a,b;cin >> a >> b;
		int count = 0;
		for (int i = 0; i < b.size(); ++i) {
			for (int j = 0; j < a.size(); ++j) {
				if (b[i] == a[j]) {
					count++;
					break;
				}
			}
		}

		cout << count << endl;
	}

	return 0;
}