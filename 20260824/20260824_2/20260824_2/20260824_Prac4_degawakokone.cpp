#include<iostream>
using namespace std;

void doubleNum(int *pNum,int num)
{
	for (int i = 0; i < 5; i++)
	{
		pNum[i] = *(pNum + i) * num;

		cout << pNum[i] << endl;
	}
}

int main(void)
{
	//変数
	int numbers[5] = { 10,20,30,40,50 };
	int num;
	int *pNum;

	pNum = numbers;

	cout << "数字を入力してください" << endl;
	cin >> num;

	//変更前の数字を表示
	cout << "<before>" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << numbers[i] << endl;
	}

	cout << "\n";

	//変更後の数字を表示
	cout << "<after>" << endl;
	doubleNum(pNum, num);

	return 0;
}