#pragma once
#include "Person.h"
using namespace std;

class History :
	public Person
{
public:
	void playTurn();
	void playerTurn();

private:
	int userName;
};