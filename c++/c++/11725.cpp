/*
#include <iostream>
#include <algorithm>
#include <vector>
//#include <chrono>	수행시간 측정 ㅇㅅㅇ
using namespace std;
//using namespace chrono;

const int MAX = 100001; //최대 100000
int n;
vector<int> adj[MAX];
vector<bool> visited;
vector<int> parent;

void dfs(int cur) {
	visited[cur] = true;

	for (int i = 0; i < adj[cur].size(); i++) {
		int next = adj[cur][i];	
		if (visited[next])	//다녀갔는지 확인해보기
			continue;
		parent[next] = cur;
		dfs(next);
	}
}

int main() {
	//steady_clock::time_point start = steady_clock::now();

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n;
	while (n < 2 || n>100000) {
		cout << ("2<=n<=100000 \n");
		cin.clear();
		cin.ignore(999, '\n');
		cin >> n;
	}
	visited.resize(n + 1, false);	//resize: 공간예약과 더불어서 안의 모든 공간을 특정 값으로 채울 수 있음
	parent.resize(n + 1, 0);

	for (int i = 1; i < n; i++) {	//1 ~ n-1 줄
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);

	}
	for (int i = 1; i <= n; i++)				//트리의 루트를 1이라고 정의
		sort(adj[i].begin(), adj[i].end());

	dfs(1);	//트리의 루트(1)부터 반복 시키기 시작

	for (int i = 2; i <= n; i++)	//트리의 루트는 부모가 없으니 2부터 출력되게
		cout << parent[i] << '\n';

	//steady_clock::time_point end = steady_clock::now();

	//duration<double> sec = end - start;
	//cout << "elapsed time: " << sec.count() << "\n";

	return 0;

}
*/
//예제 입력에서 예제 출력을 추론하기 엄청 고생함.... 각 숫자 노드의 부모를 각 출력하는 거였음....
//양방향 그래프라서 vector로 집어넣은 다음에
//dfs안에서 방문했는지의 여부에 따라 recursion(반복) 시켜주면 됨

//2.04796	0.56072