#include <iostream>
#include <cstring>
using namespace std;

int N;
int Arr[10001];
int DP[10001];


int Bigger(int A, int B) {
	if (A > B) {
		return A;
	}
	else {
		return B;
	}
}

// 초기화
void initialize() {
	memset(Arr, 0, sizeof(Arr));
	memset(DP, 0, sizeof(DP));
}

// 입력값 받기
void input() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> Arr[i];
	}
}

void Sol() {
	// 비교할 때 사용되는 경우의 수를 준비
	DP[0] = Arr[0] = 0;
	DP[1] = Arr[1];
	DP[2] = Arr[1] + Arr[2];

	for (int i = 3; i <= N; i++) {
		// 최댓값을 뭐로 할지 비교하는 과정
		DP[i] = Bigger(DP[i - 3] + Arr[i - 1] + Arr[i], Bigger(DP[i - 2] + Arr[i], DP[i - 1]));
	}
}

int main(void) {
	initialize();
	input();
	Sol();

	cout << DP[N] << endl;

	return 0;
}