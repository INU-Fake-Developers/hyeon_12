/*
#include <iostream>
#include <vector>
using namespace std;

int map[51][51];	//�ִ� 50*50, 0���� �� 1�� �߰�

void init() {	//Ȥ�� �� �ʱ�ȭ�� ����
	for (int i = 0; i < 51; i++) {
		for (int j = 0; j < 51; j++)
			map[i][j] = 0;
	}
}

void search(int x, int y) {	//���߸��� �����ֱ�
	if (map[x][y] == 1)
		map[x][y] = 0;
	if (map[x + 1][y] == 1) {
		map[x + 1][y] = 0;
		search(x + 1, y);
	}
	if (map[x - 1][y] == 1) {
		map[x - 1][y] = 0;
		search(x - 1, y);
	}
	if (map[x][y + 1] == 1) {
		map[x][y + 1] = 0;
		search(x, y + 1);
	}
	if (map[x][y - 1] == 1) {
		map[x][y - 1] = 0;
		search(x, y - 1);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t, m, n, k, count;	//���̽�����, ����, ����, ���߰���, �����̰���
	vector <int> v;
	cin >> t;

	for (int i = 0; i < t; i++) {
		init();	//�ʱ�ȭ
		count = 0;	//�ʱ�ȭ

		cin >> m >> n >> k;
		while (m < 1 || m>50 || n < 1 || n>50 || k < 1 || k>2500) {	//��������
			cout << "1<=m,n<=50, 1<=k<=2500\n";
			cin.clear();
			cin.ignore(999, '\n');
			cin >> m >> n >> k;
		}
		for (int j = 0; j < k; j++) {
			int x, y;
			cin >> x >> y;
			while (x<0||x>m-1||y<0||y>n-1) {	//��������
				cout << "0<=x<="<<m-1<<". 0<=y<="<<n-1<<'\n';
				cin.clear();
				cin.ignore(999, '\n');
				cin >> x >> y;
			}

			map[x][y] = 1;
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (map[i][j] == 1) {
					count++;	//���߸����� ������ �ϳ� �߰�
					search(i, j);	//���߸��� ������
				}
			}
		}
		v.push_back(count);
	}
	for (auto i : v)
		cout << i << '\n';
	return 0;
}
*/