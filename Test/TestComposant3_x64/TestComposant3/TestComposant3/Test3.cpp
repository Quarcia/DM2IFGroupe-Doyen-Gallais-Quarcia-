#include "Composant3.h"
#define WINDOWS_LEAN_AND_MEAN
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <iostream>
using namespace std;

bool test_moyenne_proche_de_0(vector<float> v, double epsilon){
// epsilon proche de 0
long cpt = 0;
double moy = 0;

for(vector<float>::iterator i = v.begin(); i != v.end(); ++i){
moy += *i;
cpt += 1;
}

if((moy/cpt <= epsilon) && (moy/cpt >= -epsilon))
return true;
else
return false;
}

bool test_variance_proche_de_1(vector<float> v, double epsilon){
// epsilon proche de 0
long cpt = 0;
double moy = 0;
double var = 0;
for(vector<float>::iterator i = v.begin(); i != v.end(); ++i){
moy += *i;
cpt += 1;
}
moy = moy/cpt;
for(vector<float>::iterator i = v.begin(); i != v.end(); ++i)
var = var + (*i - moy) * (*i - moy);
if((var/cpt - 1 <= epsilon) && (var/cpt - 1 >= -epsilon))
return true;
else
return false;
}

int main()
{
double result;
result=composant3(2,5);
cout << "Resultat appel composant3 " << result << endl;
char * versionComposant=getComposant3Version();
cout << "Version composant :" << versionComposant << endl;

bool testMoyenne = test_moyenne_proche_de_0(normalRandom(504), 0.1);
if (testMoyenne)
	cout << "Test moyenne OK" << endl;
else
	cout << "Test moyenne KO" << endl;

bool testVariance = test_variance_proche_de_1(normalRandom(504), 0.1);
if (testVariance)
	cout << "Test variance OK" << endl;
else
	cout << "Test variance KO" << endl;

system("pause");
}