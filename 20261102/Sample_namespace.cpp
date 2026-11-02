#include<iostream>
using namespace std;

namespace player	//namespace : 名前でグループ分けをしてくれる
{
	void showStatus()
	{
		cout << "プレイヤー名前 : Harry" << endl;
	}
}

namespace enemy
{
	void showStatus()
	{
		cout << "敵の名前 : Ron" << endl;
	}
}

int main(void)
{
	player::showStatus();
	enemy::showStatus();
	return 0;
}