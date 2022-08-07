#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int testcase;
	int arr[10] = { 0, };
		
	cin >> testcase;	// 테스트케이스의 갯수
	for (int j = 0; j < testcase; j++) {
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + 10);
		// 8번째 수 출력 (배열은 0부터 시작하므로 7)
		cout << arr[7] << endl;
	}

	return 0;
}