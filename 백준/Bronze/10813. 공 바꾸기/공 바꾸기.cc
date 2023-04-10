#include <iostream>
using namespace std;
int arr[100];

int main() {
	int N, M, j, k, temp;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
	}

	for (int i = 0; i < M; i++) {
		cin >> j >> k;
		temp = arr[j-1];
		arr[j-1] = arr[k-1];
		arr[k-1] = temp;
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}