/*
include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

const int MAX = 10001;
vector <int> adj[MAX];
vector <bool> visited;
queue <int> q;

void dfs(int n) {
	visited[n] = true;
	cout << n << " ";

	for (int i = 0; i < adj[n].size(); i++) {
		int next = adj[n][i];
		if (visited[next])
			continue;
		dfs(next);
	}
}

void bfs(int n) {
	visited[n] = true;
	cout << n << " ";
	q.push(n);

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < adj[x].size(); i++) {
			int next = adj[x][i];
			if (!visited[next]) {
				visited[next] = true;
				cout << next << " ";
				q.push(next);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m, v;	//n:정점의 개수, m:간선의 개수, v:탐색을 시작할 정점의 번호
	cin >> n >> m >> v;
	while (n < 1 || n>1000 || m < 1 || m>10000) {
		cout << "1<=n<=1000, 1<=m<=10000 \n";
		cin.clear();
		cin.ignore(999, '\n');
	}

	visited.resize(n + 1, false);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	for (int i = 1; i <= n; i++)
		sort(adj[i].begin(), adj[i].end());

	dfs(v);

	cout << '\n';

	visited = vector<bool>(n + 1, false);	//vector visited 초기화

	bfs(v);

	return 0;
}
*/