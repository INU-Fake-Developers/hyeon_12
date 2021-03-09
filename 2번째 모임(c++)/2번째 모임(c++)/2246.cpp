#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, c, d;
	vector<pair<int, int>>v;
	cin >> n;
	while (n < 1 || n>10000) {	//n의 조건
		cout << "1<=n<=10000 \n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		cin >> d >> c;
		while (d < 1 || d>10000 || c < 1 || c>10000) {	//d,c 조건
			cout << "1<=c,d<=10000 \n";
			cin.clear();
			cin.ignore(999, '\n');
			cin >> d >> c;
		}
		v.push_back({ d,c });
	}

	d = 0;	//d = 최종정답

	for (int i = 0; i < n; i++) {	//조건을 정확하게는 모르겠음....
		c = 0;	//c = flag
		for (int j = 0; j < n; j++) {
			if (i != j) {
				if (v[i].first > v[j].first && v[i].second >= v[j].second) {	//가깝고 싼 경우
					c = 1;
					break;
				}
				if (v[i].second > v[j].second && v[i].first >= v[j].first) {	//싸면서 가까운 경우
					c = 1;
					break;
				}
			}
		}
		if (c == 0)
			d++;
	}
	cout << d;

	return 0;
}