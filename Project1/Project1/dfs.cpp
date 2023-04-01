//스택의 최상단 노드를 확인한다.
//최상단 노드에게 방문하지 않은 인접 노드가 있으면 그 노드를 스택에 넣어 방문처리를 한다. 방문하지 않은 인접 노드가 없으면 스택에서 최상단 노드를 뺸다.

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 7;
int c[7]; //방문 체크용
vector<int> a[8];


void dfs(int x)
{
	if(c[x]) return ;

	c[x] = true;
	cout << x << ' ';
	for (int i = 0; i < a[x].size(); i++)
	{
		int y = a[x][i];
		dfs(y);
	}

}


int main(void)
{
	//1과 2를 연결한다.
	a[1].push_back(2);
	a[2].push_back(1);

	//1과 3를 연결한다.
	a[1].push_back(3);
	a[3].push_back(1);

	//2과 3를 연결한다.
	a[2].push_back(3);
	a[3].push_back(2);

	//2과 4를 연결한다.
	a[2].push_back(4);
	a[4].push_back(2);

	//2과 5를 연결한다.
	a[2].push_back(5);
	a[5].push_back(2);

	//3과 6를 연결한다.
	a[3].push_back(6);
	a[6].push_back(3);

	//3과 7를 연결한다.
	a[3].push_back(7);
	a[7].push_back(3);

	//4과 5를 연결한다.
	a[4].push_back(5);
	a[5].push_back(4);

	//6과 7를 연결한다.
	a[6].push_back(7);
	a[7].push_back(6);

	dfs(1);

	return 0;


}
