/*****************************************
Class WeatherStats.cpp

This class holds data for a month's rain, snow, and sunny days. This class overloads the <<
operator to display all three values.

Author: Adam Allard
Created: 04/17/15
Revisions: 04/17/15 - Initial

******************************************/

#include "WeatherStats.h"

/******* constructor *************/
WeatherStats::WeatherStats()
{
	rain = 0;
	snow = 0;
	sunnyDays = 0;
	accumulator = 0;
}


/******* setters ***********/

void WeatherStats::setRain(double r)
	{ rain = r; }

void WeatherStats::setSnow(double s)
	{ snow = s; }

void WeatherStats::setSunnyDays(int s)
	{ sunnyDays = s; }


/******* getters ***********/

double WeatherStats::getRain() const
	{ return rain; }

double WeatherStats::getSnow() const
	{ return snow; }

int WeatherStats::getSunnyDays() const
	{ return sunnyDays; }


/************* overload << operator **********/

ostream &operator << (ostream &strm, const WeatherStats &obj)
{
	strm << "      Rain: " << obj.rain << endl;
	strm << "      Snow: " << obj.snow << endl;
	strm << "Sunny Days: " << obj.sunnyDays << endl;
	return strm;
}