#include "Dog.h"
#include<iostream>

Dog::Dog(std::string name):Animal(name)
{}

void Dog::Speak()
{
	std::cout << "ƒƒ“I" << std::endl;
}