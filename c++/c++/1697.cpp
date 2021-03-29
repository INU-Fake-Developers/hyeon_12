/*
#include <iostream>
#include <queue>
using namespace std;

int map[100001] = { 0, };	//방문안한 0으로 초기화
int arr[2] = { 1,-1 };	//이동조건 걸을때, x-1, x+1
queue <int> q;

int bfs(int n, int k) {
	map[n] = 1;	//수빈이가 있는 공간 방문표시
	q.push(n);
	while (!q.empty()) {	
		for (int i = 0; i < q.size(); i++) {
			int x = q.front();
			if (x == k)	//수빈이의 위치와 동생의 위치가 일치할때
				return map[k];	
			q.pop();
			for (int j = 0; j < 2; j++) {
				int xi = x + arr[j];
				if (xi < 0 || xi>100000)	//범위 초과
					continue;
				if (!map[xi]) {	//false라면 갔다온곳이므로 다시 갈 필요가 없음
					map[xi] = map[x] + 1;
					q.push(xi);
				}
			}
			if (x * 2 <= 100000 && !map[x * 2]) {	//순간이동
				map[x * 2] = map[x] + 1;
				q.push(x * 2);
			}

		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, k;
	cin >> n >> k;
	while (n < 0 || n>100000 || k < 0 || k>100000) {
		cout << "0<=n,k<=100000 \n";
		cin.clear();
		cin.ignore(999,'\n');
		cin >> n >> k;
	}

	cout<< bfs(n, k) - 1;	//처음 있는 곳을 1로 방문 처리했기 때문에 1을빼줌

	return 0;
}
//가장빠른 시간, 경로를 찾는 문제는 주로 bfs나 dfs를 사용하는 경우가 많음
//이 문제는 최소 비용을 탐색하는 문제 이때 비용은 시간 
//이 문제는 가중치가 없기 때문에 bfs를 사용(검색해봄)
//또한 dfs로 풀 경우 스텍 오버플로우가 날 수 있음
*/