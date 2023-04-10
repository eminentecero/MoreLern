#include <iostream>
using namespace std;

int main() {
	int N, loop;

	cin >> N;
	loop = N / 4;
	for (int i = 0; i < loop; i++) {
		cout << "long ";
	}
	cout << "int";
	return 0;
}