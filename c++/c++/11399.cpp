#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, num;
	vector <int> v;
	cin >> n;
	while (n < 1 || n>1000) {	//����� ����
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
	sort(v.begin(), v.end());		//�ð�������� ����
	for (int i = 0; i < n; i++)
		num = num + v[i] * (n - i);	//��͸� �ᵵ ������ �ð��� �������� ������ ���л��

	cout << num;
	return 0;
}