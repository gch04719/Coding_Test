/* BFS
1. �����ϴ� ĭ�� ť�� �ְ� �湮�ߴٴ� ǥ�ø� �� ��, ť�� �ִ´�.
2.ť���� ���Ҹ� ������ �� ĭ�� �����¿�� ������ ĭ�� ���� 3���� ����
3.�ش�ĭ�� ������ �湮�ߴٸ� �ƹ��͵� x ,�湮 �� ������ �湮�ߴٴ� ǥ�ø� �����, �ش�ĭ�� ť�� ����
4. ť�� �������� �ݺ�...
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

	queue<pair<int, int>> Q;   //pair���� ���� �� �ִ� ť �ϳ� ����
	vis[0][0] = 1;    //�湮ǥ��
	Q.push({ 0,0 });  //ť�� ����

	while (!Q.empty())
	{
		pair<int, int> cur = Q.front();  //ť���� ���Ҹ� ����
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
