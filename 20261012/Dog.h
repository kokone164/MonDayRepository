#pragma once
#include"Animal.h"
class Dog:public Animal
{
public:
	Dog(std::string name);
	void Speak()override;	//override‘‚«Š·‚¦‚ç‚ê‚é
};