#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int N;
int cnt = 0;

int input;
vector <int> v;
// 출력해야 하는 내용
vector<char> ans;

// 수열로 제시한 내용
int seq[100000];


int main() {
	scanf("%d", &N);

	// 수열 내용 배열로 넣기
	for (int i = 0; i < N; i++) {
		scanf("%d", &input);
		seq[i] = input;
	}

	for (int i = 1; i <= N; i++) {
		v.push_back(i);
		ans.push_back('+');
		while (!v.empty() && v.back() == seq[cnt]) {
			v.pop_back();
			ans.push_back('-');
			cnt++;
		}
	}

	if (!v.empty()) {
		printf("NO");
	}
	else {
		for (int i = 0; i < ans.size(); i++) {
			cout << ans[i] << "\n";
		}
	}
}