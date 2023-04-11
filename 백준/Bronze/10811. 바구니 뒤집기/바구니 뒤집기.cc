#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> a;

int main() {
	int N, M, i, j;
	cin >> N >> M;

	for (int k = 1; k <= N; k++) {
		a.push_back(k);
	}
	
	for (int k = 0; k < M; k++) {
		cin >> i >> j;
		reverse(&a[i-1], &a[j]);
	}

	
	for (int k = 0; k < N; k++) {
		cout << a[k] << " ";
	}

	return 0;
}