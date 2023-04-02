/* BOJ 1926 ���� ____BFS
1. �����ϴ� ĭ�� ť�� �ְ� �湮�ߴٴ� ǥ�ø� �� ��, ť�� �ִ´�.
2.ť���� ���Ҹ� ������ �� ĭ�� �����¿�� ������ ĭ�� ���� 3���� ����
3.�ش�ĭ�� ������ �湮�ߴٸ� �ƹ��͵� x ,�湮 �� ������ �湮�ߴٴ� ǥ�ø� �����, �ش�ĭ�� ť�� ����
4. ť�� �������� �ݺ�...
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

	/*�˰��� ���� Ǯ �� ����� �ð��� �����ϱ� ���� ���    */
	ios::sync_with_stdio(0); // c�� c++ ǥ�� stream�� ����ȭ�� ��Ȱ��ȭ..  �ٸ�, �� �ڵ带 ����ϸ� c�� ǥ�� ������� scanf,printf, getchar�Լ��� ����ϸ� ������ �߻���.
	cin.tie(0);  // ���������� cin�� cout�� �����ִ� ������ �������� �ʱ� ������ �ð� ����.. �ٸ�, ���α׷����� �̷��� ����Ѵٸ� �Է� �䱸�ϱ� ���� �Է��� �� �� �ִ� �ڿ������� ���� ���α׷����� �� �� ����.
	 ///////////
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> board[i][j];
	}

	int mx = 0; // �׸� ������ �ִ�.
	int num = 0; //�׸��� ��

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == 0 || vis[i][j] == 1) continue;
			num++;

			queue<pair<int, int>> Q;   //pair���� ���� �� �ִ� ť �ϳ� ����
			vis[i][j] = 1;    //�湮ǥ��
			Q.push({ i,j });  //ť�� ����
			int area = 0;

			while (!Q.empty())
			{
				area++;
				pair<int, int> cur = Q.front();  //ť���� ���Ҹ� ����
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

