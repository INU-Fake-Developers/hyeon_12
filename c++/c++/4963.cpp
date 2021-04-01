/*
#include <iostream>
#include <vector>
using namespace std;

int map[51][51];	//최대 50*50, 0포함 각 1씩 추가	

void search(int x, int y) {	//섬마을 제외하기
	if (map[x][y] == 1)	//검색마을
		map[x][y] = 0;
	if (map[x + 1][y] == 1) {	//우
		map[x + 1][y] = 0;
		search(x + 1, y);
	}
	if (map[x - 1][y] == 1) {	//좌
		map[x - 1][y] = 0;
		search(x - 1, y);
	}
	if (map[x][y + 1] == 1) {	//상
		map[x][y + 1] = 0;
		search(x, y + 1);
	}
	if (map[x][y - 1] == 1) {	//하
		map[x][y - 1] = 0;
		search(x, y - 1);
	}
	if (map[x - 1][y + 1] == 1) {	//왼쪽 위
		map[x - 1][y + 1] = 0;
		search(x - 1, y + 1);
	}
	if (map[x + 1][y + 1] == 1) {	//오른쪽 위
		map[x + 1][y + 1] = 0;
		search(x + 1, y + 1);
	}
	if (map[x - 1][y - 1] == 1) {	//왼쪽 아래
		map[x - 1][y - 1] = 0;
		search(x - 1, y - 1);
	}
	if (map[x + 1][y - 1] == 1) {	//오른쪽 아래
		map[x + 1][y - 1] = 0;
		search(x + 1, y - 1);
	}
}

int main() {
	int w, h, count;	//너비 높이
	vector<int> v;
	while (true) {
		count = 0;	//count 초기화
		cin >> w >> h;
		while (w < 0 || w>50 || h < 0 || h>50) {
			cout << "1<=w,h<=50\n";
			cin.clear();
			cin.ignore(999, '\n');
			cin >> w >> h;
		}
		if (w == 0 && h == 0)
			break;

		for (int i = 0; i < h; i++) {	//w,h순서로 했는데 h,w 순서가 맞다
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