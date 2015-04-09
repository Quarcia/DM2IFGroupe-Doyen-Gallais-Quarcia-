#pragma once
#ifndef COMPOSANT3_H
#define COMPOSANT3_H
#ifdef COMPOSANT3_EXPORTS
#define COMPOSANT3_INTERFACE __declspec(dllexport)
#else
#define COMPOSANT3_INTERFACE __declspec(dllimport)
#endif
COMPOSANT3_INTERFACE double composant3(double p1, double p2);
COMPOSANT3_INTERFACE char * getComposant3Version();
COMPOSANT3_INTERFACE double uniformRandom();
COMPOSANT3_INTERFACE double normalRandom();
#endif
