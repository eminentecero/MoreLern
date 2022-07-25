#include <iostream>
#include <queue>
using namespace std;

int n, k;
char Map[101][101];
int visited[101][101];
int check[101][101];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

/*
void DFS(int x, int y, int depth) {
	if (x < 0 || y < 0 || x >= n || y >= k) return;
	if (x == n - 1 && y == k - 1) {
		if (depth < Min)
			Min = depth;
		return;
	}
	for (int i = 0; i < 4; i++) {
		int Next_x = x + dx[i];
		int Next_y = y + dy[i];
		if (visited[Next_x][Next_y] == 0 && Map[Next_x][Next_y] == '1') {
			visited[Next_x][Next_y] = 1;
			DFS(Next_x, Next_y, depth + 1);
			visited[Next_x][Next_y] = 0;
		}
	}
}
*/

void BFS(int x, int y) {
	visited[x][y] = 1;

	queue<pair<int, int>> q;
	q.push(make_pair(x, y));

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int next_x = x + dx[i];
			int next_y = y + dy[i];

			if (0 <= next_x && next_x < n && 0 <= next_y && next_y < k) {
				if (visited[next_x][next_y] == 0 && Map[next_x][next_y] == '1') {
					check[next_x][next_y] = check[x][y] + 1;
					visited[next_x][next_y] = 1;
					q.push(make_pair(next_x, next_y));
				}
			}
		}
	}
}

int main() {
	scanf("%d %d", &n, &k);    //N세로 M가로
	for (int i = 0; i < n; i++) {
		scanf("%s", Map[i]);
	}

	//DFS(0, 0, 1);
	BFS(0, 0);
	//printf("%d \n", Min);
	printf("%d\n", check[n - 1][k - 1] + 1);

	return 0;
}