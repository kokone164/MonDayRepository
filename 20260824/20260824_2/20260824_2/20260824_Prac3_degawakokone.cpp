#include<iostream>
using namespace std;

int main(void)
{
	int numbers[5] = { 35,82,17,96,54 };
	int* pNum;
	int max = 0;

	pNum = numbers;

	for (int i = 0; i < 5; i++)
	{
		if (*(pNum + i) >= max)
		{
			max = *(pNum + i);
		}
	}

	cout << "MAX:" << max << endl;

	return 0;
}