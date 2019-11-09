#ifndef CONSTANTS_H
#define CONSTANTS_H

#define _USE_MATH_DEFINES

#include <cmath>

const int TicksPerRev        = 20;
const float WheelDiameterM   = 0.0693f;   // meters
const float WheelDistanceM   = 0.12035f;  // meters
const float DistancePerClick = (M_PI * WheelDiameter)/TicksPerRev;

#endif