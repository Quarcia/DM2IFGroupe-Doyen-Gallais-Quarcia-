#include <iostream>
#include <string>
#pragma once
#ifndef COMPOSANT7_H
#define COMPOSANT7_H
#ifdef COMPOSANT7_EXPORTS
#define COMPOSANT7_INTERFACE __declspec(dllexport)
#else
#define COMPOSANT7_INTERFACE __declspec(dllimport)
#endif
COMPOSANT7_INTERFACE double composant7(double p1, double p2);
COMPOSANT7_INTERFACE char * getComposant7Version();
COMPOSANT7_INTERFACE double pricePath(std::string, double[], double, double);
#endif