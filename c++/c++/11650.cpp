/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool com(pair<int, int> a, pair<int, int> b) {	//sort�����̹Ƿ� ���� ���ʿ����
	if (a.first == b.first)
		return a.second < b.second;
	else
		return a.first < b.first;
}
int main() {
	int n, x, y;
	vector<pair<int, int>> v;
	cin >> n;
	while (n < 1 || n>100000) {	//n�� ����
		cout << "1<=n<=100000 \n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		while (100000 < abs(x) || 100000 < abs(y)) {	//x,y ����
			cout << "1<=n<=100000 \n";
			cin.clear();
			cin.ignore(999, '\n');
			cin >> n;
		}
		//for (auto i : v) {						//�������� ������ �ȵȴٴ� ������ �����ϰ� ������ �ð��ʰ�;
		//	if (x == i.first && y == i.second) {
		//		cout << "��ġ�� ���� �� ���� ���� \n";
		//		return 0;
		//	}
		//}
		v.push_back({ x,y });
	}
	sort(v.begin(), v.end(), com);

	for (auto i : v)
		cout << i.first << " " << i.second << '\n';

	return 0;
}
*/