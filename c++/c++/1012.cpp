/*
#include <iostream>
#include <vector>
using namespace std;

int map[51][51];	//최대 50*50, 0포함 각 1씩 추가

void init() {	//혹시 모를 초기화를 위해
	for (int i = 0; i < 51; i++) {
		for (int j = 0; j < 51; j++)
			map[i][j] = 0;
	}
}

void search(int x, int y) {	//배추마을 없애주기
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

	int t, m, n, k, count;	//케이스개수, 가로, 세로, 배추개수, 지렁이개수
	vector <int> v;
	cin >> t;

	for (int i = 0; i < t; i++) {
		init();	//초기화
		count = 0;	//초기화

		cin >> m >> n >> k;
		while (m < 1 || m>50 || n < 1 || n>50 || k < 1 || k>2500) {	//조건제거
			cout << "1<=m,n<=50, 1<=k<=2500\n";
			cin.clear();
			cin.ignore(999, '\n');
			cin >> m >> n >> k;
		}
		for (int j = 0; j < k; j++) {
			int x, y;
			cin >> x >> y;
			while (x<0||x>m-1||y<0||y>n-1) {	//조건제거
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
					count++;	//배추마을에 지렁이 하나 추가
					search(i, j);	//배추마을 없애줌
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