#include <iostream>
#include <string>
#include "Map.h"
#include "History.h"
#include "Person.h"
#include "CandyKing.h"



using namespace std;

//Let the user to write the name of there choices
string userName;

int main()
{
	// colors the backgroung
	system("color 5f");
	//title
	 cout << "\n\n\t\t*** Unheard universal ***\n\n";
	 //stories travel around candyland
	 cout << " You woke up out of nowhere and don't know. You try to wake up but you noticed that it isn't a dream.\n";
	 cout << "unknow stranger: What is your name?\n";
	 cin >> userName;

	cout << "Unknow stranger: WElCOME TO CANDYMYSTERYLAND!!!!!" << userName << " Here is where you can have fun!!!!\n";
	cout << "travel around and discover to CANDYMYSTERYLAND!!\n ";

	
	// make a pause then continue
	system("Pause");
	//the charcter interact with the username
	cout << "chocoberry: Hello" << userName << "Where are you wanna to travel\n";
	cout << userName << "I wanna travel to ";

	system("Pause");
	
	History history;
	history.playerTurn(); 

	return 0;
}