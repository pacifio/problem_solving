#include<iostream>
using namespace std;

int main() {
	string a,b;cin >> a >> b;
	for(int i = 0; i < b.size(); ++i) {
		a.erase(remove(a.begin(), a.end(), b[i]), a.end());
	}

	cout << a << endl;
	return 0;
}