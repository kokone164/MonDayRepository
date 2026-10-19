#include<iostream>
#include"Saber.h"
#include"Archer.h"
#include"Rider.h"
using namespace std;

int main(void)
{
	Saber saber;
	Archer archer;
	Rider rider;

	saber.ShowProfile();
	saber.Attack();

	cout << "\n";

	archer.ShowProfile();
	archer.Attack();

	cout << "\n";

	rider.ShowProfile();
	rider.Attack();

	return 0;
}