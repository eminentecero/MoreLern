#include <iostream>
using namespace std;

int T, N, input;

int _max = -1000000;
int _min = 1000000;

void answer(int a) {
	if (a < _min) {
		_min = a;
	}
	if (a > _max) {
		_max = a;
	}
}

int main() {
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);

		for (int k = 0; k < N; k++) {
			scanf("%d", &input);
			answer(input);
		}

		printf("%d %d \n", _min, _max);
		
		_max = -1000000;
		_min = 1000000;
	}
}