#include <iostream>
#include <queue>
using namespace std;

int N, cnt, want, priority, ans;
queue <pair<int, int>> q;
priority_queue<int> pq;

void init() {
	ans = 0;
	while (!q.empty()) {
		q.pop();
	}

	while (!pq.empty()) {
		pq.pop();
	}
}

int print() {
	// 포인트!!! 하나씩 비교 후 우선순위가 일치하지 않으면 뒤로 push하기
	while (!q.empty()) {
		int first = q.front().first;
		int priority = q.front().second;
		q.pop();

		if (pq.top() != priority) {
			// 일치하지 않아!
			// 그러면 큐의 맨 뒤로 보내기!
			q.push({ first, priority });
		}
		else {
			// 일치하면??
			// 그대로 출력!
			pq.pop();
			++ans;
			if (first == want) {
				// 일치하면 cnt 입력
				//printf("%d", cnt);
				return ans;
			}
		}
	}
}


int main() {
	scanf("%d", &N);

	for (int lp = 0; lp < N; lp++) {
		init();

		// 자세한 정보 입력
		scanf("%d %d", &cnt, &want);

		// 들어가지는 내용 모두 다 입력 완료
		for (int i = 0; i < cnt; i++) {
			scanf("%d", &priority);
			// 해당 입력되는 우선순위와 인덱스를 입력
			q.push({ i, priority });
			pq.push(priority);
		}

		printf("%d \n", print());
	}
	
	return 0;
}