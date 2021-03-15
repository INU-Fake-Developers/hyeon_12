#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, num;
	vector <int> v;
	cin >> n;
	while (n < 1 || n>1000) {	//사람수 조건
		cout << "1<=n<=1000 \n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	num = 0;
	sort(v.begin(), v.end());		//시간순서대로 정렬
	for (int i = 0; i < n; i++)
		num = num + v[i] * (n - i);	//재귀를 써도 되지만 시간이 느려지는 간단한 수학사용

	cout << num;
	return 0;
}