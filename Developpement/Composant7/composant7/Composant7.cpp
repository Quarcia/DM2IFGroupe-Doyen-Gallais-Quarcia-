// composant7.cpp : définit les fonctions exportées pour l'application DLL.
//

#include "stdafx.h"
#include "composant7.h"
#include "Composant7Version.h"
#include "Payoff.h"
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

double composant7(double p1, double p2)
{
return pow(p1,p2);
}
char * getComposant7Version()
{
return "Composant 7 version " COMPOSANT_VERSION_STR;
}

double pricePath(string typePayoff, double path[], double strike, double maturity){
	Payoff p = Payoff();
	if(typePayoff=="Call"){
		double date = p.getDate(maturity);
		return p.getPrice(date, strike, path);
	}
}