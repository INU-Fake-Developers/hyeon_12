/*
#include <iostream>
#include <algorithm>
#include <queue>	//FIFO(first in first out), stack�� LIFO(last in first out)
#include <vector>
//#include <chrono>
using namespace std;
//using namespace chrono;

const int MAX = 100001;	//�ִ� 100000
int n;
vector<int> adj[MAX];
vector<bool> visited;
vector<int> parent;
queue<int> q;

void bfs(int start) {
	visited[start] = true;
	q.push(start);	//����

	while (!q.empty()) {
		int x = q.front();
		q.pop();	//����(
		for (int i = 0; i < adj[x].size(); i++) {
			int next = adj[x][i];
			if (!visited[next]) {	//�湮���� �ʾҴٸ� ����
				visited[next] = true;	//�湮ǥ�� �س���
				parent[next] = x;	//�θ� ã���ְ�
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

	for (int i = 1; i <= n; i++)	//Ʈ���� ��Ʈ�� 1�̴ϱ�, 1���� ����
		sort(adj[i].begin(), adj[i].end());

	bfs(1);

	for (int i = 2; i <= n; i++)	//Ʈ���� ��Ʈ�� �θ� ������ 2���� ��µǰ�
		cout << parent[i] << '\n';

	//steady_clock::time_point end = steady_clock::now();
	//duration<double> sec = end - start;
	//cout << "elapsed time: " << sec.count() << "\n";

	return 0;
}
*/
//����� �׷������� ���� ���
//bfs(�ʺ�켱Ž��) ������ ��带 ���ʴ�� �湮��. STL�� queue�� ����ϸ� ���� ���� ����
//1.queue�� ���� �ճ�� pop 
//2.�����忡 ������ ��� ����� �湮���� ���� ��� push
//3.queue�� ������� �ʴٸ� 1������ ����

//5.86653	2.72249	0.697794