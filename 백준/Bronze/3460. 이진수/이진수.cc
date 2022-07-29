#include <iostream>
#include <vector>
using namespace std;

int T, n, r;
vector<int> a;

// 이진수로 나타내기
void answer() {
	a.clear();

	cin >> n;
	r = n;
	while (r != 1 || 0) {
		int b = r % 2;
		a.push_back(b);
		r = r / 2;
	}
	int data = r % 2;
	a.push_back(data);

	for (int i = 0; i < a.size(); i++) {
		if (a[i] == 1) {
			cout << i << " ";
		}
	}
}

int main() {
	cin >> T;

	for (int i = 0; i < T; i++) {
		answer();
	}
	return 0;
}