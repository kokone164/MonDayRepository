#pragma once
#include"Servant.h"
using namespace std;
class Archer:public Servant
{
public:
	void Attack()override;
	void ShowProfile()override;
};