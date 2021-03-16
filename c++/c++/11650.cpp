/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool com(pair<int, int> a, pair<int, int> b) {	//sort조건이므로 굳이 할필요없음
	if (a.first == b.first)
		return a.second < b.second;
	else
		return a.first < b.first;
}
int main() {
	int n, x, y;
	vector<pair<int, int>> v;
	cin >> n;
	while (n < 1 || n>100000) {	//n의 조건
		cout << "1<=n<=100000 \n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		while (100000 < abs(x) || 100000 < abs(y)) {	//x,y 조건
			cout << "1<=n<=100000 \n";
			cin.clear();
			cin.ignore(999, '\n');
			cin >> n;
		}
		//for (auto i : v) {						//같은점이 있으면 안된다는 조건을 정리하고 싶은데 시간초과;
		//	if (x == i.first && y == i.second) {
		//		cout << "위치가 같은 두 점은 없음 \n";
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