#include <iostream>
using namespace std;

int N, M;
int A[51][51];
int B[51][51];


// 반전 시키는 코드
void change(int m, int n) {
	// A와 B가 다른 것부터 3*3으로 반전을 시켜줌
	for (int i = m; i < m + 3; i++) {
		for (int j = n; j < n + 3; j++) {
			A[i][j] = !A[i][j];
		}
	}
}

int main() {
	// 행렬의 크기
	// 세로 * 가로
	cin >> N >> M;

	char x;

	// 답안 - 세로
	for (int i = 0; i < N; i++) {
		// 답안 - 가로
		for (int j = 0; j < M; j++) {
			cin >> x;
			A[i][j] = x - 48;
		}
	}

	// 사용자 입력 - 세로
	for (int i = 0; i < N; i++) {
		// 사용자 입력 - 가로
		for (int j = 0; j < M; j++) {
			cin >> x;
			B[i][j] = x - 48;
		}
	}


	int count = 0;

	// 0번째부터 끝까지 다른 것이 있으면 하나씩 반전을 시킴
	for (int i = 0; i < N - 2; i++) {
		for (int j = 0; j < M - 2; j++) {
			if (A[i][j] != B[i][j]) {
				count++;
				change(i, j);
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (A[i][j] != B[i][j]) {
				count=-1;
			}
		}
	}

	cout << count;

	return 0;
}