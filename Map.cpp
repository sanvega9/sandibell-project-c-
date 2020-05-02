#include "Map.h"
#include <iostream>
#include <string>

using namespace std;
map::map(string place, int distanc)
{
	cout << "The location is\n\n";
	Place = place;
	Distanc = distanc;
}

void map::location(string direction)
{
	cout << endl << Place << ":is" << direction ;
}
void map::distance(int numberofstep, string distan)
{
	cout << endl << Place << "is about" << numberofstep << "in" << distan;
}