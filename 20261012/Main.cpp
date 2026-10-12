#include<iostream>
#include"Dog.h"
using namespace std;
int main(void)
{
	Dog dog("ƒ|ƒ`");
	cout << dog.GetName() << endl;
	
	dog.Speak();

	return 0;
}