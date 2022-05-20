#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int N, S, T;
pair<int, int> c[200001];
priority_queue <int, vector<int>, greater<int>> ans;

int main() {
	cin >> N;

	// 강의 시간 입력
	for (int i = 0; i < N; i++) {
		cin >> c[i].first >> c[i].second;
	}

	// 정렬
	sort(c, c+N);

	// 첫번째 끝시간을 기준으로 그 다음 수업 찾기
	ans.push(c[0].second);

	for (int i = 1; i < N; i++) {
		// 끝나는 시간보다 시작 시간이 작으면?
		if (ans.top() <= c[i].first) {
			ans.pop();
			ans.push(c[i].second);
		}
		else {
			// 시간 안 맞으면 그 시간 마치는 시간 기준으로 또 찾기
			ans.push(c[i].second);
		}
	}

	cout << ans.size();
	return 0;
}