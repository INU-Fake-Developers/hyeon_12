/*
#include <iostream>
#include <vector>
using namespace std;

int map[51][51];	//�ִ� 50*50, 0���� �� 1�� �߰�	

void search(int x, int y) {	//������ �����ϱ�
	if (map[x][y] == 1)	//�˻�����
		map[x][y] = 0;
	if (map[x + 1][y] == 1) {	//��
		map[x + 1][y] = 0;
		search(x + 1, y);
	}
	if (map[x - 1][y] == 1) {	//��
		map[x - 1][y] = 0;
		search(x - 1, y);
	}
	if (map[x][y + 1] == 1) {	//��
		map[x][y + 1] = 0;
		search(x, y + 1);
	}
	if (map[x][y - 1] == 1) {	//��
		map[x][y - 1] = 0;
		search(x, y - 1);
	}
	if (map[x - 1][y + 1] == 1) {	//���� ��
		map[x - 1][y + 1] = 0;
		search(x - 1, y + 1);
	}
	if (map[x + 1][y + 1] == 1) {	//������ ��
		map[x + 1][y + 1] = 0;
		search(x + 1, y + 1);
	}
	if (map[x - 1][y - 1] == 1) {	//���� �Ʒ�
		map[x - 1][y - 1] = 0;
		search(x - 1, y - 1);
	}
	if (map[x + 1][y - 1] == 1) {	//������ �Ʒ�
		map[x + 1][y - 1] = 0;
		search(x + 1, y - 1);
	}
}

int main() {
	int w, h, count;	//�ʺ� ����
	vector<int> v;
	while (true) {
		count = 0;	//count �ʱ�ȭ
		cin >> w >> h;
		while (w < 0 || w>50 || h < 0 || h>50) {
			cout << "1<=w,h<=50\n";
			cin.clear();
			cin.ignore(999, '\n');
			cin >> w >> h;
		}
		if (w == 0 && h == 0)
			break;

		for (int i = 0; i < h; i++) {	//w,h������ �ߴµ� h,w ������ �´�
			for (int j = 0; j < w; j++) {
				int n;
				cin >> n;
				map[i][j] = n;
			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (map[i][j] == 1) {
					count++;
					search(i, j);
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