#include "stdafx.h"
#include "Payoff.h"
#include <iostream>
#pragma once

using namespace std;

Payoff::Payoff(){}

int Payoff::getDate(double maturity){
	return 504;
}

// Payoff d'une option européenne
double Payoff::getPrice(int date, double strike, double path[]){
	return max(path[date-1] - strike, 0);
}