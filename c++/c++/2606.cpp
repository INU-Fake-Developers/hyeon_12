/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 101;	//최대 100, 0포함하면 101
vector<int> adj[MAX];
vector<bool> visited;

void dfs(int n, int &count) {
	visited[n] = true;
	count++;

	for (int i = 0; i < adj[n].size(); i++) {
		int next = adj[n][i];
		if (visited[next])
			continue;
		dfs(next, count);
	}
}

int main() {
	int c, r, count =0;	//컴퓨터개수, 컴퓨터쌍의 수, 감염된 컴퓨터 수
	cin >> c >> r;
	while (c < 1 || c>100) {
		cout << "1<=c<=100\n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> c;
	}

	visited.resize(c + 1, false);

	for (int i = 0; i < r; i++) {
		int a, b;
		cin >> a >> b;
		while (a > c || b > c) {	//1번부터 차례대로 번호가 매겨지므로
			cout << "잘못입력하였습니다\n";
			cin.clear();
			cin.ignore(999, '\n');
			cin >> c;
		}
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i = 0; i < c; i++)
		sort(adj[i].begin(), adj[i].end());

	dfs(1, count);

	cout << count-1;	//1번컴퓨터를 통해 웜바이러스에 걸리게 되는 컴퓨터의 수이므로 -1
	
}
//최소나 제일 빠른방법이 아닌 전체를 탐색하므로 dfs를 사용
*/