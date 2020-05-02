#include "History.h"
#include "Map.h"
//function to location to the CANDYMYSTERYLAND
void History::playerTurn()
{
	map map("mintchoc", 1);


	for (int i = 0; i < 1; i++)
	{
		map.location("right");
	}
	for (int i = 0; i < 1; i++)
	{
		map.distance(28, "23");
	}
}
