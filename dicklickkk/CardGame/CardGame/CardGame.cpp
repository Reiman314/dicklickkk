// ConsoleApplication2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;


int main()
{
	int min = 1, max = 36, randomNum1, randomNum2, player1Points = 0, player2Points = 0;
	int range = (max - min) + 1;


	do
	{
	cout << "Player 1 press enter to draw a card" << endl;
	//cin >> draw;
	if (cin.get() == '\n')
	{
		time_t seconds;
		time(&seconds);
		srand((unsigned int)seconds);
		//cout << rand() << endl;
		randomNum1 = rand();
		randomNum1 = randomNum1 % (max - min + 1) + min;
		//cout << randomNum << endl;
	}
	cout << randomNum1 << endl;

	cout << "Player 2 press enter to draw a card" << endl;
	if (cin.get() == '\n')
	{
		time_t seconds;
		time(&seconds);
		srand((unsigned int)seconds);
		//cout << rand() << endl;
		randomNum2 = rand();
		randomNum2 = randomNum2 % (max - min + 1) + min;
		//cout << randomNum << endl;
	}
	cout << randomNum2 << endl;
	
	if (randomNum1 > randomNum2)
		player1Points = player1Points++;
	else if (randomNum1 < randomNum2)
		player2Points = player2Points++;
	else if (randomNum1 == randomNum2)
	{
		player1Points, player2Points == 0; 
	}
	cout << "Player 1 points =  "<< player1Points << endl << "Player 2 points =  " << player2Points << endl;
}
	while (player1Points != 10, player2Points != 10);
	system("pause");

	return 0;

}