#pragma once
#include"Servant.h"
using namespace std;

class Saber:public Servant
{
public:
	void Attack() override;

	void ShowProfile()override;
};

