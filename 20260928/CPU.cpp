#include "CPU.h"
#include<iostream>
using namespace std;

CPU::CPU()
{
	cpuScore = 0;
}

void CPU::AddScore(int card)
{
	cpuScore += card;

	card = 0;
}


int CPU::getCpuScpre()const
{
	return cpuScore;
}