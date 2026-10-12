#include"Animal.h"
#include<iostream>

Animal::Animal(std::string name) {
	this->name = name;	//¡ˆ—‚µ‚Ä‚¢‚é©•ª©g‚ğw‚µ‚Ä‚¢‚éH
}

std::string Animal::GetName()
{
	return name;
}

void Animal::Speak()
{
	std::cout << "“®•¨‚Ì–Â‚«º" << std::endl;
}