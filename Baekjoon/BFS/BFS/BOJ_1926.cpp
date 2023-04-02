/* BOJ 1926 문제 ____BFS
1. 시작하는 칸을 큐에 넣고 방문했다는 표시를 한 후, 큐에 넣는다.
2.큐에서 원소를 꺼내어 그 칸에 상하좌우로 인접한 칸에 대해 3번을 진행
3.해당칸을 이전에 방문했다면 아무것도 x ,방문 안 했으면 방문했다는 표시를 남기고, 해당칸을 큐에 삽입
4. 큐가 빌때까지 반복...
*/
#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int board[502][502] = { 0, };
bool vis[502][502];
int n , m ;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main()
{

	/*알고리즘 문제 풀 때 입출력 시간을 절약하기 위해 사용    */
	ios::sync_with_stdio(0); // c와 c++ 표준 stream의 동기화를 비활성화..  다만, 이 코드를 사용하면 c의 표준 입출력인 scanf,printf, getchar함수를 사용하면 오류가 발생함.
	cin.tie(0);  // 내부적으로 cin과 cout를 묶어주는 과정을 수행하지 않기 때문에 시간 절약.. 다만, 프로그램에서 이렇게 사용한다면 입력 요구하기 전에 입력을 할 수 있는 자연스럽지 않은 프로그래밍이 될 수 있음.
	 ///////////
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> board[i][j];
	}

	int mx = 0; // 그림 넓이의 최댓값.
	int num = 0; //그림의 수

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == 0 || vis[i][j] == 1) continue;
			num++;

			queue<pair<int, int>> Q;   //pair형을 담을 수 있는 큐 하나 선언
			vis[i][j] = 1;    //방문표시
			Q.push({ i,j });  //큐에 삽입
			int area = 0;

			while (!Q.empty())
			{
				area++;
				pair<int, int> cur = Q.front();  //큐에서 원소를 꺼냄
				Q.pop();
				//cout << '(' << cur.X << ", " << cur.Y << ")";

				for (int dir = 0; dir < 4; dir++)
				{
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
					else {};

					if (vis[nx][ny] || board[nx][ny] != 1) continue;
					vis[nx][ny] = 1;
					Q.push({ nx,ny });

				}

			}
			mx = max(mx, area);
		}
	}
	cout << num << '\n' << mx;
}

