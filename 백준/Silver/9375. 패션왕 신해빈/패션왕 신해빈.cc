#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int T, N;

unordered_map<string, int> map;

int main() {
	cin >> T;
	for (int i = 0; i < T; i++) {
		int ans = 1;
		if (!map.empty()) {
			map.clear();
		}
		cin >> N;
		for (int j = 0; j < N; j++) {
			string name, type;
			cin >> name >> type;

			// 종류가 이미 있는지 확인
			if (map.find(type) != map.end()) {
				int cnt = map[type];
				map[type] = cnt + 1;
			}
			else {
				map[type] = 1;
			}
		}

		unordered_map<string, int>::iterator it;
		for (it = map.begin(); it != map.end(); it++) {
			ans *= (it->second) + 1;
		}
		ans -= 1;
		cout << ans << "\n";
	}

	return 0;
}