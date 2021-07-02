#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	//�ӵ��⼧�� ������
	cin.tie(NULL), cout.tie(NULL);

	struct question {
		string num;
		int strike;
		int ball;
	};

	int result=0;	//���� ����, ������ �����ϰ� ���� ���ɼ��� �ִ� ���� �� ����
	int test;	//���䰪�� ��Ʈ����ũ ���� ������ �´� Ȯ���ϴ� �´� �׽�Ʈ ��
	vector<question> v;	//question ����ü ����
	vector<int> vv;

	int n;	//�ο��̰� �������� ����̳� ������ �ߴ����� ��Ÿ���� �ڿ��� n
	question input;	//input�� �׳� �����̸�
	cin >> n;

	while (n < 1 || n>100) {	//1�̻� 100 ���� ����
		cout << "1<=n<=100\n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}

	for (int i = 0; i < n; i++) {
		cin >> input.num >> input.strike >> input.ball;
		v.push_back(input);
	}

	for (int i = 123; i <= 987; i++) {	//0�� ������ ���δٸ� �������̱� ������ ������ ����(123~987)
		string target = to_string(i);	//i�� int�̹Ƿ� ���ڿ��� �ٲپ���
		test = 0;
		if (target[0] == '0' || target[1] == '0' || target[2] == '0' || target[0] == target[1] || target[0] == target[2] || target[1] == target[2])	//������ �����ϼ��� ^^ ���� ���� 0�� �־��� �Ϸ絿�� �˰��� ����� ��������������
			continue;

		for (int j = 0; j < n; j++) {
			int targetStrike = 0, targetBall = 0;

			for (int k = 0; k < 3; k++) {	//3�ڸ� ���ڴϱ�
				if (target[k] == v[j].num[k])	//���� �ڸ��� �ִ� ���� �����϶� ��Ʈ����ũ ����
					targetStrike++;
				if (target[k] == v[j].num[(k + 1) % 3] || target[k] == v[j].num[(k + 2) % 3])
					targetBall++;
				//�����⸦ �̿��ϴ°��� �� �ٸ� �ڸ� ���ڸ� ������Ѿ��ϴµ� k�� Ŀ���� ���� ���� �Ѿ�� �ֱ� ����
				//���� ����, �ٸ� �ڸ��϶� �� ����
			}
			if (v[j].strike == targetStrike && v[j].ball == targetBall)
				test++;
			//��Ʈ����ũ�� ���� Ÿ�ټ��ڿ� ���ٸ� ���ɼ��� �ִ� ���̱⶧���� �׽�Ʈ�� ����
		}
		if (test == n) {	//�׽�Ʈ�� �������� ���ٸ� ���ɼ��� �ִ� ���� ���� ����
			result++;
		}
	}
	cout << result;
}