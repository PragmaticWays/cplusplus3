/*****************************************
Program Weather Statistics

This program allows a user to enter in weather statistics (rain, snow, and sunny days)
   for a number of months of their choosing. The program will then display the user's
   inputs, and find out and display the record highs and lows for each. 

Author: Adam Allard
Created: 04/17/15
Revisions: 04/17/15 - Initial

******************************************/

#include "Linked_List.h"
#include "WeatherStats.h"

void display(Linked_List<WeatherStats> &);
void findLargestSmallest(Linked_List<WeatherStats> &, int);

int main()
{
	WeatherStats weather;
	Linked_List<WeatherStats> list;
	int months;
	double rain;
	double snow;
	double sDays;

	cout << "How many months do you wish to enter weather statistics for? ";
	cin >> months;

	cout << "Enter in the stats for each month." << endl;
	for (int i = 0; i < months; i++)
	{
		cout << "Month " << i + 1 << " Rain: ";
		cin >> rain;
		cout << "        Snow: ";
		cin >> snow;
		cout << "  Sunny days: ";
		cin >> sDays;
		cout << endl;

		weather.setRain(rain);
		weather.setSnow(snow);
		weather.setSunnyDays(sDays);

		list.appendNode(weather);
	}

	display(list);

	findLargestSmallest(list, months);


	// I have read some controversy on using system("pause");
	// What are your thoughts?
	system("pause");
	return 0;
}

// displays WeatherStats of Linked_List (overloaded the << op in WeatherStats.cpp)
void display(Linked_List<WeatherStats> &w)
{
	cout << "Here are the results." << endl;
	w.displayList();
}

// this one was fun.
// this function searches the Linked_List to check which months
//    had the highest and lowest WeatherStats
void findLargestSmallest(Linked_List<WeatherStats> &w, int m)
{
	double highRain;
	double highSnow;
	int highSDays;
	double lowRain;
	double lowSnow;
	int lowSDays;

	// check highest
	// set initial high values to first item in list
	highRain = w.checkNode(1).getRain();
	highSnow = w.checkNode(1).getSnow();
	highSDays = w.checkNode(1).getSunnyDays();

	// iterate through remaining items in list - reassign high values if found
	for (int i = 2; i < m + 1; i++)
	{
		if (w.checkNode(i).getRain() > highRain)
			highRain = w.checkNode(i).getRain();
		if (w.checkNode(i).getSnow() > highSnow)
			highSnow = w.checkNode(i).getSnow();
		if (w.checkNode(i).getSunnyDays() > highSDays)
			highSDays = w.checkNode(i).getSunnyDays();
	}

	// check lowest
	// set initial low values to first item in list
	lowRain = w.checkNode(1).getRain();
	lowSnow = w.checkNode(1).getSnow();
	lowSDays = w.checkNode(1).getSunnyDays();

	// iterate through remaining items in list - reassign low values if found
	for (int i = 2; i < m + 1; i++)
	{
		if (w.checkNode(i).getRain() < lowRain)
			lowRain = w.checkNode(i).getRain();
		if (w.checkNode(i).getSnow() < lowSnow)
			lowSnow = w.checkNode(i).getSnow();
		if (w.checkNode(i).getSunnyDays() < lowSDays)
			lowSDays = w.checkNode(i).getSunnyDays();
	}

	// display results
	cout << "Records:" << endl << endl;
	cout << "Highest rain: " << highRain << endl;
	cout << "Highest snow: " << highSnow << endl;
	cout << "Highest sunny days: " << highSDays << endl;
	cout << "Lowest rain: " << lowRain << endl;
	cout << "Lowest snow: " << lowSnow << endl;
	cout << "Lowest sunny days: " << lowSDays << endl;
}