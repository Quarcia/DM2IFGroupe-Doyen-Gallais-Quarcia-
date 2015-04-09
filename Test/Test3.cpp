#include "composant3.h"
#define WINDOWS_LEAN_AND_MEAN
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector.h>
#include <iostream>

using namespace std;

int main()
{
double result;
result=composant3(2,5);
cout << "Resultat appel composant0 " << result << endl;
char * versionComposant=getComposant0Version();
cout << "Version composant :" << versionComposant << endl;

Sleep(3000);

}

bool test_moyenne_proche_de_0(vector<double> v, double epsilon){
  // epsilon proche de 0
  long cpt = 0;
  double moy = 0;
  for(vector<double>::iterator i = v.begin(); i != v.end(); ++i){
    moy += *i;
    cpt += 1;
  }
  if((moy/cpt <= epsilon) && (moy/cpt >= -epsilon))
    return true;
  else
    return false;
}

bool test_variance_proche_de_1(vector<double> v, double epsilon){
  // epsilon proche de 0
  long cpt = 0;
  double moy = 0;
  double var = 0;
  for(vector<double>::iterator i = v.begin(); i != v.end(); ++i){
    moy += *i;
    cpt += 1;
  }
  moy = moy/cpt;
  for(vector<double>::iterator i = v.begin(); i != v.end(); ++i)
    var = var + (*i - moy) * (*i - moy);
  if((var - 1 <= epsilon) && (var - 1 >= -epsilon))
    return true;
  else
    return false;
}
