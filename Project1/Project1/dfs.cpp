//������ �ֻ�� ��带 Ȯ���Ѵ�.
//�ֻ�� ��忡�� �湮���� ���� ���� ��尡 ������ �� ��带 ���ÿ� �־� �湮ó���� �Ѵ�. �湮���� ���� ���� ��尡 ������ ���ÿ��� �ֻ�� ��带 �A��.

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 7;
int c[7]; //�湮 üũ��
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
	//1�� 2�� �����Ѵ�.
	a[1].push_back(2);
	a[2].push_back(1);

	//1�� 3�� �����Ѵ�.
	a[1].push_back(3);
	a[3].push_back(1);

	//2�� 3�� �����Ѵ�.
	a[2].push_back(3);
	a[3].push_back(2);

	//2�� 4�� �����Ѵ�.
	a[2].push_back(4);
	a[4].push_back(2);

	//2�� 5�� �����Ѵ�.
	a[2].push_back(5);
	a[5].push_back(2);

	//3�� 6�� �����Ѵ�.
	a[3].push_back(6);
	a[6].push_back(3);

	//3�� 7�� �����Ѵ�.
	a[3].push_back(7);
	a[7].push_back(3);

	//4�� 5�� �����Ѵ�.
	a[4].push_back(5);
	a[5].push_back(4);

	//6�� 7�� �����Ѵ�.
	a[6].push_back(7);
	a[7].push_back(6);

	dfs(1);

	return 0;


}
