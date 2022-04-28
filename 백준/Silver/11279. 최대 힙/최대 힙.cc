#include<iostream>
#include<queue>
using namespace std;

// 연산의 개수
int N;
int num = -1;

// 힙
priority_queue<int> heap;

int main() {
	scanf("%d", &N);
	//cin >> N;
	for (int i = 0; i < N; i++) {
		//cin >> num;
		scanf("%d", &num);
		if (num != 0) {
			// 아니면 그냥 heap에 값을 삽입
			heap.push(num);
		}
		else if (num == 0 && !heap.empty()) {
			// 최대값
			printf("%d \n", heap.top());
			heap.pop();
		}
		else if (num == 0 && heap.empty()) {
			printf("0 \n");
		}
	}
}