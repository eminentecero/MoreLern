#include <iostream>
#include <vector>
using namespace std;

int A, B, ans, index;
vector<int> num(1000);

int main() {
	cin >> A >> B;
	index = 0;
	for (int i = 1; i <= 1000; i++) {
		for (int j = 1; j <= i && index < 1000; j++) {
			num[index] = i;
			index++;
		}
	}


	for (int j = A-1; j <= B-1; j++) {
		ans += num[j];
	}

	cout << ans;
}