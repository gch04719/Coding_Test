/* BFS
1. 시작하는 칸을 큐에 넣고 방문했다는 표시를 한 후, 큐에 넣는다.
2.큐에서 원소를 꺼내어 그 칸에 상하좌우로 인접한 칸에 대해 3번을 진행
3.해당칸을 이전에 방문했다면 아무것도 x ,방문 안 했으면 방문했다는 표시를 남기고, 해당칸을 큐에 삽입
4. 큐가 빌때까지 반복...
*/
#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int board[50][502] = { 0, };
bool vis[502][502];
int n = 7, m = 10;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	queue<pair<int, int>> Q;   //pair형을 담을 수 있는 큐 하나 선언
	vis[0][0] = 1;    //방문표시
	Q.push({ 0,0 });  //큐에 삽입

	while (!Q.empty())
	{
		pair<int, int> cur = Q.front();  //큐에서 원소를 꺼냄
		Q.pop();
		cout << '(' << cur.X << ", " << cur.Y << ")";

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
}
