#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	//속도향샹을 꽤찬다
	cin.tie(NULL), cout.tie(NULL);

	struct question {
		string num;
		int strike;
		int ball;
	};

	int result=0;	//최종 정답, 영수가 생각하고 있을 가능성이 있는 답의 총 개수
	int test;	//정답값과 스트라이크 볼의 개수가 맞는 확인하는 맞는 테스트 수
	vector<question> v;	//question 구조체 백터
	vector<int> vv;

	int n;	//민영이가 영수에게 몇번이나 질문을 했는지를 나타내는 자연수 n
	question input;	//input은 그냥 벡터이름
	cin >> n;

	while (n < 1 || n>100) {	//1이상 100 이하 조건
		cout << "1<=n<=100\n";
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}

	for (int i = 0; i < n; i++) {
		cin >> input.num >> input.strike >> input.ball;
		v.push_back(input);
	}

	for (int i = 123; i <= 987; i++) {	//0을 제외한 서로다른 세숫자이기 때문에 가능한 숫자(123~987)
		string target = to_string(i);	//i가 int이므로 문자열로 바꾸어줌
		test = 0;
		if (target[0] == '0' || target[1] == '0' || target[2] == '0' || target[0] == target[1] || target[0] == target[2] || target[1] == target[2])	//여러분 조심하세요 ^^ 제가 숫자 0을 넣었서 하루동안 알고리즘 고민함 ㅅㅄㅄㅄㅄㅄㅄ
			continue;

		for (int j = 0; j < n; j++) {
			int targetStrike = 0, targetBall = 0;

			for (int k = 0; k < 3; k++) {	//3자리 숫자니깐
				if (target[k] == v[j].num[k])	//같은 자리에 있는 같은 숫자일때 스트라이크 증가
					targetStrike++;
				if (target[k] == v[j].num[(k + 1) % 3] || target[k] == v[j].num[(k + 2) % 3])
					targetBall++;
				//나누기를 이용하는것은 다 다른 자리 숫자를 적용시켜야하는데 k가 커지면 범위 밖을 넘어갈수 있기 때문
				//같은 숫자, 다른 자리일때 볼 증가
			}
			if (v[j].strike == targetStrike && v[j].ball == targetBall)
				test++;
			//스트라이크와 볼이 타겟숫자와 같다면 가능성이 있는 답이기때문에 테스트값 증가
		}
		if (test == n) {	//테스트와 질문값이 같다면 가능성이 있는 답의 개수 증가
			result++;
		}
	}
	cout << result;
}