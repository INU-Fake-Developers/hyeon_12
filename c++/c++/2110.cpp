/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n, c;
vector <int> v;

void counter_maxdis() {	//�̺�Ž��
	int low = 1;	//������ ������ �Ÿ� �ּҰ�
	int high = v[n - 1] - v[0];	//������ ������ �Ÿ� �ִ밪
	int result = 0;	//�� ������ ������ �ִ� �Ÿ�
	while (low <= high) {
		int counter = 1;
		int prev = 0;	//�Ÿ��� �� �� ������ �� ù��° ������
		int mid = (low + high) / 2;	//�߰���(Ű��)

		for (int i = 1; i < n; i++) {
			int diff = v[i] - v[prev];	//diff = ������ ������ �Ÿ�
			if (diff >= mid) {	//������ ������ �Ÿ��� �߰������� ũ��
				counter++;	//������ ��ġ
				prev = i;	//��ġ�� �������� �ڸ����� 
			}
		}
		if (counter >= c) {	//��������� ����ϴ� �� ū Ű������ �غ���(������ ���)
			result = max(result, mid);
			low = mid + 1;
		}
		else
			high = mid - 1;	//������ ���� ������ Ű���� �ٿ��� ã�ƺ���(������ �� �ø���)
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
//����: ���ĵ� �迭���� �߰����� ã�� �߰������� ������ ���� ��, ũ�� ū ���� �ٽ� Ž���ϴ� �˰���
*/