#include <iostream>
using namespace std;
int arr[100];

int main() {
	int N, M, i, j, k;
	cin >> N >> M;
	for (int l = 0; l < M; l++) {
		cin >> i >> j >> k;
		for (int o = i; o <= j; o++) {
			arr[o-1] = k;
		}
	}

	for (int l = 0; l < N; l++) {
		cout << arr[l] << " ";
	}

	return 0;
}