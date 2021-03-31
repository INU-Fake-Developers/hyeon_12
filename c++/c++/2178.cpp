/*
#include <iostream>
#include <queue>
using namespace std;

bool map[101][101];	//�ִ� 100*100������ 0�� �����ؼ� +1��
int visited[101][101];
int x[4] = { 0,0,-1,1 };	//�����¿�
int y[4] = { 1,-1,0,0 };

void bfs() {
	int count = 1;
	queue<pair<int, int>> q;	//2���迭�̱� ������ pair���
	q.push({ 1,1 });
	visited[1][1] = count;	//�湮ǥ�� �� ���ڱ�(����ĭ��) ǥ��
	while (!q.empty()) {
		int size = q.size();	//���⼭ ����� ������ �ʰ� for���� q.size()���ϸ�
		count++;				//for���ȿ� pop�� �ֱ� ������ ������� �̻�����
		for (int i = 0; i < size; i++) {
			int front = q.front().first;	//x��ǥ
			int second = q.front().second;	//y��ǥ
			q.pop();
			for (int j = 0; j < 4; j++) {	//j<4�� ������ �����¿� �� 4����
				int movex = front + x[j];
				int movey = second + y[j];
				if (map[movex][movey] && !visited[movex][movey]) {	//�湮���� �ʾҰų� �������̶��
					q.push({ movex, movey });
					visited[movex][movey] = count;	//�湮ǥ�ð� ���ڱ� ǥ��
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
			map[i][j] = a - '0';	//0�� �Ȼ��ָ� �ƽ�Ű��ȣ�� ��
		}
	}

	bfs();

	cout << visited[n][m];	//���� ���ڱ� ����

	return 0;
}
*/