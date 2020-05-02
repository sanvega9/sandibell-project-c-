#pragma once

#include <string>

using namespace std;

class map
{
public: 
	void location(string directions);
	void distance(int numberofstep, string distan);

	map(string place, int distanc);
	

private:
	//Variables
	string Place;
	string Distanc;
	
};