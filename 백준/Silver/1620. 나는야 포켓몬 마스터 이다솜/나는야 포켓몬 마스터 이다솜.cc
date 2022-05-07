#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int N, M;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);	//없으면 시간 초과

	cin >> N >> M;

	unordered_map<string, int> mon;
	// 크기가 100001로 하니깐 오류가 뜸
	// 임시로 100으로 크기 지정
	string mon2[100001];
	string name;

	for (int i = 1; i <= N; i++) {
		// 숫자 값과 포켓몬 이름을 삽입
		cin >> name;
		mon[name] = i;
		mon2[i] = name;
	}

	string Q;

	for (int i = 0; i < M; i++) {
		// 맞춰야 하는 값들
		// string 혹은 int 값
		cin >> Q;
		if ('0' <= Q[0] && Q[0] <= '9') {
			// stoi = 문자열을 숫자로 바꾸기.
			cout << mon2[stoi(Q)] << "\n";
		}
		else {
			// 묻는 것이 문자열일때
			cout << mon.find(Q)->second << "\n";
		}
	}
	return 0;
}