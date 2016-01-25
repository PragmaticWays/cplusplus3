/*****************************************
Class WeatherStats.h

This class holds data for a month's rain, snow, and sunny days. This class overloads the << 
   operator to display all three values. 

Author: Adam Allard
Created: 04/17/15
Revisions: 04/17/15 - Initial

******************************************/

#ifndef WEATHERSTATS_H
#define WEATHERSTATS_H

#include <iostream>
using namespace std;

class WeatherStats;

ostream &operator << (ostream&, const WeatherStats&);

class WeatherStats
{
private: 
	double rain;
	double snow;
	int sunnyDays;
	int accumulator;
public:
	WeatherStats();
	
	void setRain(double);
	void setSnow(double);
	void setSunnyDays(int);

	double getRain() const;
	double getSnow() const;
	int getSunnyDays() const;

	friend ostream &operator << (ostream &, const WeatherStats &);
};

#endif