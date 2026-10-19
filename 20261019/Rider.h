#pragma once
#include"Servant.h"
using namespace std;
class Rider:public Servant
{
public:
	void Attack() override;

	void ShowProfile()override;
};

