#include<iostream>
#include<queue>
using namespace std;

int N, num;

int main() {
	scanf("%d", &N);

	priority_queue<int, vector<int>, greater<int>> pq;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &num);
			pq.push(num);
			if (pq.size() > N) {
				pq.pop();
			}
		}
	}

	printf("%d", pq.top());
}