#include <iostream>
using namespace std;

int answer[6] = { 1, 1, 2, 2, 2, 8 };
int input[6];
int a;

int main() {
	for (int i = 0; i < 6; i++) {
		cin >> a;
		input[i] = a;
		cout << answer[i] - input[i] << " ";
	}

	return 0;
}