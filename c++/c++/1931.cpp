/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool com(pair<int, int>a, pair<int, int> b) {	//�������� �ռ��� ���� �޼����� ��� �� �ʿ�� ����
	if (a.first == b.first)
		return a.second < b.second;
	else
		return a.first < b.first;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, num, a;	//ȸ���� ��
	vector <pair<int, int>> v;	//ȸ�ǽð�, ������ �ð�
	cin >> num;
	while (num < 1 || num>100000) {	//ȸ���� �� ����
		cout << "1<=num<=100000 \n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> num;
	}
	for (int i = 0; i < num; i++) {//������ 2^31-1�ε� INT_MAX�� 2^31-1�̾ ���ǻ���
		cin >> a >> n;
		v.push_back({ n,a });	//������ �ð�,�����ϴ� �ð�(������ �ð��� �� �߿��ϹǷ�)
	}
	sort(v.begin(), v.end(), com);
	a = 0; n = 0;	//���� �ʱ�ȭ
	for (int i = 0; i < v.size(); i++) {
		if (v[i].second < a)	//a=���ð�, ���ſ��� ȸ�ǽ��� ������ ������ ȸ�ǽ����ϴ� �ð��� ���ð����� ������ �ȵ�
			continue;
		a = v[i].first;			//ȸ�ǰ� ���� �ð����� ���ð��� ������
		n++;
	}
	cout << n;
	return 0;
}
*/