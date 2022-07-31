#include <iostream>
using namespace std;

int off, on, sum;
int ans = 0;

int main() {
	for (int i = 0; i < 10; i++) {
		cin >> off >> on;
		sum -= off;
		sum += on;

		if (ans < sum) {
			ans = sum;
		}
	}

	cout << ans;

	return 0;
}