/*
#include <iostream>
#include <algorithm>
#include <vector>
//#include <chrono>	����ð� ���� ������
using namespace std;
//using namespace chrono;

const int MAX = 100001; //�ִ� 100000
int n;
vector<int> adj[MAX];
vector<bool> visited;
vector<int> parent;

void dfs(int cur) {
	visited[cur] = true;

	for (int i = 0; i < adj[cur].size(); i++) {
		int next = adj[cur][i];	
		if (visited[next])	//�ٳబ���� Ȯ���غ���
			continue;
		parent[next] = cur;
		dfs(next);
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
	visited.resize(n + 1, false);	//resize: ��������� ���Ҿ ���� ��� ������ Ư�� ������ ä�� �� ����
	parent.resize(n + 1, 0);

	for (int i = 1; i < n; i++) {	//1 ~ n-1 ��
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);

	}
	for (int i = 1; i <= n; i++)				//Ʈ���� ��Ʈ�� 1�̶�� ����
		sort(adj[i].begin(), adj[i].end());

	dfs(1);	//Ʈ���� ��Ʈ(1)���� �ݺ� ��Ű�� ����

	for (int i = 2; i <= n; i++)	//Ʈ���� ��Ʈ�� �θ� ������ 2���� ��µǰ�
		cout << parent[i] << '\n';

	//steady_clock::time_point end = steady_clock::now();

	//duration<double> sec = end - start;
	//cout << "elapsed time: " << sec.count() << "\n";

	return 0;

}
*/
//���� �Է¿��� ���� ����� �߷��ϱ� ��û �����.... �� ���� ����� �θ� �� ����ϴ� �ſ���....
//����� �׷����� vector�� ������� ������
//dfs�ȿ��� �湮�ߴ����� ���ο� ���� recursion(�ݺ�) �����ָ� ��

//2.04796	0.56072