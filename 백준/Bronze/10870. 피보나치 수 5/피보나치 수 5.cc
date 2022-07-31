#include <iostream>
#include <vector>
using namespace std;

int n, sum;
vector<int> v;

int main() {
	cin >> n;

	for (int i = 0; i <= n; i++) {
		if (v.size() >= 2) {
			sum = v[i - 2] + v[i - 1];
			v.push_back(sum);
			v.back();
			//cout << v.back() << endl;
		}
		else {
			v.push_back(i);
			v.back();
			//cout << v.back() << endl;
		}
	}

	cout << v.back()<< endl;

	return 0;
}