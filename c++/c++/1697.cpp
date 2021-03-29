/*
#include <iostream>
#include <queue>
using namespace std;

int map[100001] = { 0, };	//�湮���� 0���� �ʱ�ȭ
int arr[2] = { 1,-1 };	//�̵����� ������, x-1, x+1
queue <int> q;

int bfs(int n, int k) {
	map[n] = 1;	//�����̰� �ִ� ���� �湮ǥ��
	q.push(n);
	while (!q.empty()) {	
		for (int i = 0; i < q.size(); i++) {
			int x = q.front();
			if (x == k)	//�������� ��ġ�� ������ ��ġ�� ��ġ�Ҷ�
				return map[k];	
			q.pop();
			for (int j = 0; j < 2; j++) {
				int xi = x + arr[j];
				if (xi < 0 || xi>100000)	//���� �ʰ�
					continue;
				if (!map[xi]) {	//false��� ���ٿ°��̹Ƿ� �ٽ� �� �ʿ䰡 ����
					map[xi] = map[x] + 1;
					q.push(xi);
				}
			}
			if (x * 2 <= 100000 && !map[x * 2]) {	//�����̵�
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

	cout<< bfs(n, k) - 1;	//ó�� �ִ� ���� 1�� �湮 ó���߱� ������ 1������

	return 0;
}
//������� �ð�, ��θ� ã�� ������ �ַ� bfs�� dfs�� ����ϴ� ��찡 ����
//�� ������ �ּ� ����� Ž���ϴ� ���� �̶� ����� �ð� 
//�� ������ ����ġ�� ���� ������ bfs�� ���(�˻��غ�)
//���� dfs�� Ǯ ��� ���� �����÷ο찡 �� �� ����
*/