/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, num=0, num2=1;	//�޴� ��, ���� ��, �����ȿ� ����
int map[26][26];	//�ִ� 25*25, 0���� 26
bool vis[26][26];
vector <int> v;

void map_break(int x, int y) {
	if (map[x][y] == 1)
		map[x][y] = 0;
	if (map[x + 1][y] == 1) {
		map[x + 1][y] = 0;
		map_break(x + 1, y);
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	while (n < 5 || n>25) {
		cout << "5<=n<=25\n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			char a;
			cin >> a;
			map[i][j] = a - '0';
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (map[i][j] == 1) {
				num++;
			}

		}
	}

}
*/
