#include<iostream>
using namespace std;

int main() {
	long long int n, m;cin >> n;
	m = n*(n+1);
	m = m / 2;

	cout << m%2 << endl;

	return 0;
}