/*
#include <iostream>
#include <queue>
using namespace std;

bool map[101][101];	//최대 100*100이지만 0을 생각해서 +1씩
int visited[101][101];
int x[4] = { 0,0,-1,1 };	//상하좌우
int y[4] = { 1,-1,0,0 };

void bfs() {
	int count = 1;
	queue<pair<int, int>> q;	//2차배열이기 때문에 pair사용
	q.push({ 1,1 });
	visited[1][1] = count;	//방문표시 겸 발자국(지난칸수) 표시
	while (!q.empty()) {
		int size = q.size();	//여기서 사이즈를 빼주지 않고 for문에 q.size()를하면
		count++;				//for문안에 pop이 있기 때문에 결과값이 이상해짐
		for (int i = 0; i < size; i++) {
			int front = q.front().first;	//x좌표
			int second = q.front().second;	//y좌표
			q.pop();
			for (int j = 0; j < 4; j++) {	//j<4인 이유는 상하좌우 총 4가지
				int movex = front + x[j];
				int movey = second + y[j];
				if (map[movex][movey] && !visited[movex][movey]) {	//방문하지 않았거나 범위안이라면
					q.push({ movex, movey });
					visited[movex][movey] = count;	//방문표시겸 발자국 표시
				}
			}
		}

	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	while (n < 2 || m < 2 || n>100 || m>100) {
		cout << "2<=n,m<=100\n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n >> m;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			char a;
			cin >> a;
			map[i][j] = a - '0';	//0을 안빼주면 아스키번호로 들어감
		}
	}

	bfs();

	cout << visited[n][m];	//최종 발자국 제출

	return 0;
}
*/