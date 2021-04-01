/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 101;	//�ִ� 100, 0�����ϸ� 101
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
	int c, r, count =0;	//��ǻ�Ͱ���, ��ǻ�ͽ��� ��, ������ ��ǻ�� ��
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
		while (a > c || b > c) {	//1������ ���ʴ�� ��ȣ�� �Ű����Ƿ�
			cout << "�߸��Է��Ͽ����ϴ�\n";
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

	cout << count-1;	//1����ǻ�͸� ���� �����̷����� �ɸ��� �Ǵ� ��ǻ���� ���̹Ƿ� -1
	
}
//�ּҳ� ���� ��������� �ƴ� ��ü�� Ž���ϹǷ� dfs�� ���
*/