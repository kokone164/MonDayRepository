#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

const int CARD_MAX = 28;
const int DIVIDE_CARD = 7;

int main(void)
{
	int Card[CARD_MAX] = {};//全てのカード
	int turnCard[DIVIDE_CARD] = {};//場に伏せるカード
	int publicCard[DIVIDE_CARD] = {};//場に公開するカード
	int plyCard[DIVIDE_CARD] = {};//プレイヤーのカード
	int cpuCard[DIVIDE_CARD] = {};//CPUのカード
	int enterCard[DIVIDE_CARD] = {};//入力する



	cout << "数字当てゲーム\n"
		"自分のカードに隠されている数字を推理し、全てのカードを当ててください。\n"
		"場に公開されているカードとCPUのカードを見ることができます。\n"
		"\n===================================GAME START===================================\n";

	while (true)
	{

	}
}