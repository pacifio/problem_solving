#include<iostream>
using namespace std;

int main() {
	int N,M;
	cin >> N >> M;
	int A[M][N];

	for (int i=0; i < M; ++i) {
		for (int j=0;j < N; ++j) {
			cin >> A[j][i];
		}
	}

	int s1=0;int s2=0;
	bool match = false;
	for (int i=0;i<N;++i) {
		s1 += A[i][0];
	}

	for (int j=0;j<M;++j) {
		s2 += A[0][j];
	}

	if (s1==s2) {
		match = true;
	}

	cout << match << endl;

	return 0;
}