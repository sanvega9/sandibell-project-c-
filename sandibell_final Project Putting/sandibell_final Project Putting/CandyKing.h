#pragma once
#include "Person.h"
#include <string>
using namespace std;

// Test function
class CandyKing : public Person
{
// Is public CandyKing
public:
	CandyKing();
	CandyKing(string userName);

	void setName(string userName);
	string getName();
//Is Private CandyKing
private:
	string Name;

};