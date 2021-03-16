/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n, c;
vector <int> v;

void counter_maxdis() {	//이분탐색
	int low = 1;	//공유기 사이의 거리 최소값
	int high = v[n - 1] - v[0];	//공유기 사이의 거리 최대값
	int result = 0;	//두 공유기 사이의 최대 거리
	while (low <= high) {
		int counter = 1;
		int prev = 0;	//거리를 잴 두 공유기 중 첫번째 공유기
		int mid = (low + high) / 2;	//중간값(키값)

		for (int i = 1; i < n; i++) {
			int diff = v[i] - v[prev];	//diff = 공유기 사이의 거리
			if (diff >= mid) {	//공유기 사이의 거리가 중간값보다 크면
				counter++;	//공유기 설치
				prev = i;	//설치한 공유기의 자리부터 
			}
		}
		if (counter >= c) {	//공유기수가 충분하니 더 큰 키값으로 해보자(같으면 출력)
			result = max(result, mid);
			low = mid + 1;
		}
		else
			high = mid - 1;	//공유기 수가 적으니 키값을 줄여서 찾아보자(공유기 수 늘리기)
	}
	cout << result << '\n';
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> c;
	while (n < 2 || n>200000 || c<2 || c>n) {
		cout << "(2<=n<=200000) and (2<=c<=n) \n";
		cin.clear();
		cin.ignore(999, '\n');
	}
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	counter_maxdis();
}
//개념: 정렬된 배열에서 중간값을 찾아 중간값보다 작으면 작은 쪽, 크면 큰 쪽을 다시 탐색하는 알고리즘
*/