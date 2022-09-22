#include<iostream>
using namespace std;

int main() {
	int t;cin >> t;
	while (t--) {
		int x,y;cin >> x >> y;
		int n;cin >> n;

		int sum1 = 0;int sum2 = 0;
		int s1 = 0, s2 = 0;
		int s3 = 0, s4 = 0;
		for (int i=0;i<n;++i) {
			int a,b;cin >> a >> b;
			s1 += a * x;
			s2 += b * y;
			s3 += b * x;
			s4 += a * y;
		}

		sum1 = s1+s2;
		sum2 = s3+s4;

		if (sum1 < sum2) {
			cout << sum1 << endl;
		}else {
			cout << sum2 << endl;
		}
	}

	return 0;
}
