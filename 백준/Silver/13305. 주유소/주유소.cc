#include <iostream>
using namespace std;

int N;
int bill[100000];
int road[100000];

int main() {
	// 가격
	long long total = 0;
	// 주유해야하는 곳
	long long min;

	// 도시 개수
	cin >> N;

	// 거리
	for (int i = 0; i < N - 1; i++) {
		cin >> road[i];
	}

	// 도시의 주유 가격
	for (int i = 0; i < N; i++) {
		cin >> bill[i];
	}

	// 첫번째에서는 무조건 주유해야함.
	min = bill[0];

	total += min * road[0];

	// 그 후 나오는 주유소의 가격을 보고
	// 1. 이전 주유소에서 추가로 주유를 할 것인지
	// 2. 해당 주유소에서 주유를 할 것인지 정하기
	for (int i = 1; i < N; i++) {
		if (bill[i] < min) {
			min = bill[i];
			total += min * road[i];
		}
		else {
			total += min * road[i];
		}
	}
	cout << total;
	return 0;
}