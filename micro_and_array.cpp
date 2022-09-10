#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;cin >> t;
	while(t--) {
		int n,k;cin >> n >> k;
		int a[n];
		for (int i = 0;i<n;++i) {
			cin >> a[i];
		}

		int min;
		min = a[0];
	    for(int i = 0; i < n; i++){
	        if(a[i] < min){
	            min = a[i];
	        }
	    }

		int ans = k - min;
		if (ans > 0) {
			cout << ans << endl;
		}else {
			cout << 0 << endl;
		}
	}

	return 0;
}