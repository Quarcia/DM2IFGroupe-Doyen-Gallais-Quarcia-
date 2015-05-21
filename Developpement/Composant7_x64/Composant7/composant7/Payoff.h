#pragma once

class Payoff{

public:
	Payoff();
	int getDate(double);
	double getPrice(int, double, double[]);
};