/*
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	int list[1001][3];
	cin >> n;
	while (n < 2 || n>1000) {	//조건부 검사
		cout << "2<=n<=1000\n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		list[i][0] = a;
		list[i][1] = b;
		list[i][2] = c;
	}

	for (int i = 1; i < n; i++) {
		list[i][0] += min(list[i - 1][1], list[i - 1][2]);
		list[i][1] += min(list[i - 1][0], list[i - 1][2]);
		list[i][2] += min(list[i - 1][1], list[i - 1][0]);
	}

	int an = min({ list[n - 1][0], list[n - 1][1] , list[n - 1][2] });
	cout << an;

	return 0;
}
*/