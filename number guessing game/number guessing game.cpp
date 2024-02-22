// number guessing game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdlib.h>
#include<ctime>
using namespace std; 
void  game (int num){
	
	int guess = 1 + rand() % (100);
	if (num == guess) { std::cout << " YOU WIN"; }
	else if (num > 100||num<1) { std::cout << "invalid number"; }
	else if (num != guess) { std::cout << " Sorry , Wrong answer try again\n the right number is "<<guess; }
}

int main()
{
	srand(time(0));
	int number;
	std::cout << "GUESS A NUMBER BETWEEN 1:100";
	std::cin >> number;
	game(number);
	return 0;
}

