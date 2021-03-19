/*
#include <iostream>
#include <algorithm>
#include <queue>	//FIFO(first in first out), stack이 LIFO(last in first out)
#include <vector>
//#include <chrono>
using namespace std;
//using namespace chrono;

const int MAX = 100001;	//최대 100000
int n;
vector<int> adj[MAX];
vector<bool> visited;
vector<int> parent;
queue<int> q;

void bfs(int start) {
	visited[start] = true;
	q.push(start);	//삽입

	while (!q.empty()) {
		int x = q.front();
		q.pop();	//삭제(
		for (int i = 0; i < adj[x].size(); i++) {
			int next = adj[x][i];
			if (!visited[next]) {	//방문하지 않았다면 조사
				visited[next] = true;	//방문표시 해놓고
				parent[next] = x;	//부모 찾아주고
				q.push(next);
			}
		}
	}
}

int main() {
	//steady_clock::time_point start = steady_clock::now();

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n;
	while (n < 2 || n>100000) {
		cout << ("2<=n<=100000 \n");
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	
	visited.resize(n + 1, false);
	parent.resize(n + 1, 0);
	
	for (int i = 1; i < n; i++) {
		int a,b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	for (int i = 1; i <= n; i++)	//트리의 루트는 1이니깐, 1부터 정렬
		sort(adj[i].begin(), adj[i].end());

	bfs(1);

	for (int i = 2; i <= n; i++)	//트리의 루트는 부모가 없으니 2부터 출력되게
		cout << parent[i] << '\n';

	//steady_clock::time_point end = steady_clock::now();
	//duration<double> sec = end - start;
	//cout << "elapsed time: " << sec.count() << "\n";

	return 0;
}
*/
//양방향 그래프여서 벡터 사용
//bfs(너비우선탐색) 인접한 노드를 차례대로 방문함. STL의 queue를 사용하면 쉽게 구현 가능
//1.queue의 가장 앞노드 pop 
//2.현재노드에 인접한 모든 노드중 방문하지 않은 노드 push
//3.queue가 비어있지 않다면 1번부터 실행

//5.86653	2.72249	0.697794