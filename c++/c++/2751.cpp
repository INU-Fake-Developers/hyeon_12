/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n,a;
	vector <int> v;
	cin >> n;
	while (n < 1 || n>1000000) {
		cout << "1<=n<=1000000 \n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		cin >> a;
		while (abs(a) > 1000000) {
			cout << "a<= |1000000| \n";
			cin.clear();
			cin.ignore(999, '\n');
			cin >> a;
		}
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	for (auto i : v)
		cout << i << '\n';
}
*/