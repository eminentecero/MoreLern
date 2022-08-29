#include <iostream>
using namespace std;

int ans, T, num1, num2, total;

int main() {
	cin >> ans;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> num1 >> num2;
		total += num1 * num2;
	}
	if (total == ans) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}