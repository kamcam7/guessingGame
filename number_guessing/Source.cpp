#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;



void helperfun()
{

	//////////////////////////////////////////////////////////////////////////////////////
	//Uses time to generate random seed.
	//Without this the random number will be the same every time the program is ran.
	srand((unsigned)time(NULL));

	//Base Number
	int base = NULL;

	//Hight range number
	int high = NULL;

	base = 1;
	high = 30;
	for (int i = 0; i < high; i++)
	{
		int randomnum = 1 + (rand() % high);

		cout << randomnum << endl;
	}
	////////////////////////////////////////////////////////////////////////////////////////
}

//make a variable that stores a random number between 1 and 10.
//Prompt the user with a welcome message and ask them to guess the number
//Only give the user a set number of tries until they get gameover.
//If they guess the random number, tell them they win.
//If they guess a wrong number, tell them "wrong try again you have {attempst} remaining."
void guessingGame()
{
	srand((unsigned)time(NULL));
	int userguess = NULL;
	int rangenum = 30;
	int randomnum = 1 + (rand() % rangenum);
	int numguesses = 5;
	string welcomemessage = "Hello, please guess a number between 1 and " + to_string(rangenum) + ".You have " + to_string(numguesses) + " guesses.\n";
	cout << welcomemessage;

	
	
	


	do {
		cin >> userguess;
		numguesses = numguesses - 1;
		if (userguess == randomnum)
		{
			cout << "You win." << endl;
			return;

			
		}
		else
		{
			cout << "incorrect, try again" << endl;

		}
		
		cin.clear();
	} while (numguesses > 0);



	
}

int main()
{
	guessingGame();


	return 0;
}



//Unused forloop code
/*
* for (int attempts = 0; attempts < numguesses; attempts++)
	{

	}

	

	for (numguesses; numguesses > 0; numguesses--)
	{

	}


	while (numguesses > 0)
	{
		//guess
	
		//if correct
	               //win
		//else lose
		numguesses--;
	}
*/