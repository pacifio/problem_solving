#include<iostream>
using namespace std;

int main() {
	int n = 5;
	int arr[] = {1, 2, 3, 4, 5};
    int newA[n];
	newA[0] = arr[n-1];
	for(int i=1;i<n;++i) {
		newA[i] = arr[i-1];
	}

	for(int i=0;i<n;++i) {
		arr[i] = newA[i];
	}

	for(int i=0;i<n;++i) {
		cout << arr[i] << " ";
	}
}