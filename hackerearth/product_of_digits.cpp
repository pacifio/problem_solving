#include<iostream>
using namespace std;

const unsigned int M = 1000000007;

int main() {
	int t;cin >> t;
	long int ans = 1;
	while(t--) {
		int n; cin >> n;
		ans = (ans * n) % M;
	}

	cout << ans << endl;
	return 0;
}