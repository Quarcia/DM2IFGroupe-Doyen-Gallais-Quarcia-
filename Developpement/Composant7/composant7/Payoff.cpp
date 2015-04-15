#include "stdafx.h"
#include "Payoff.h"
#pragma once

Payoff::Payoff(){}

double Payoff::getDate(double maturity){
	return 540.0;
}

// Payoff d'une option européenne
double Payoff::getPrice(double date, double strike, double path[]){
	int lastCursor = (sizeof(path)/sizeof(*path)) - 1;
	return max(path[lastCursor] - strike, 0);
}