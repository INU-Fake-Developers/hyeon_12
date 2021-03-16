/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool com(pair<int, int>a, pair<int, int> b) {	//순서정렬 앞순서 다음 뒷순서라 사실 할 필요는 없음
	if (a.first == b.first)
		return a.second < b.second;
	else
		return a.first < b.first;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, num, a;	//회의의 수
	vector <pair<int, int>> v;	//회의시간, 끝나는 시간
	cin >> num;
	while (num < 1 || num>100000) {	//회의의 수 조건
		cout << "1<=num<=100000 \n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> num;
	}
	for (int i = 0; i < num; i++) {//조건이 2^31-1인데 INT_MAX가 2^31-1이어서 조건생략
		cin >> a >> n;
		v.push_back({ n,a });	//끝나는 시간,시작하는 시간(끝나는 시간이 더 중요하므로)
	}
	sort(v.begin(), v.end(), com);
	a = 0; n = 0;	//변수 초기화
	for (int i = 0; i < v.size(); i++) {
		if (v[i].second < a)	//a=현시간, 과거에서 회의실을 쓸수는 없으니 회의시작하는 시간은 현시간보다 작으면 안됨
			continue;
		a = v[i].first;			//회의가 끝난 시간으로 현시간을 맞춰줌
		n++;
	}
	cout << n;
	return 0;
}
*/