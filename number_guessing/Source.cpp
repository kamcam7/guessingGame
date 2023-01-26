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
void guessingGame(int numtries, int maxnum, bool cheatmode)
{
	srand((unsigned)time(NULL));
	int userguess = NULL;
	int rangenum = maxnum;
	int randomnum = 1 + (rand() % rangenum);
	int numguesses = numtries;
	bool cheating = cheatmode;


	string welcomemessage = "Hello, please guess a number between 1 and " + to_string(rangenum) + ".You have " + to_string(numguesses) + " guesses.\n";
	cout << welcomemessage;

	
	
	


	do {
		if (cheating)
		{
			cout << "CHEAT: [" << randomnum << "]" << endl;
		}
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
			cout << "you have " << numguesses << " remaining.";

		}
		
		cin.clear();
	} while (numguesses > 0);



	
}

int main()
{

	cout << "How many tries would you like?:";
	int mytries = NULL;
	cin >> mytries;
	cout << endl;

	cout << "What range of numbers would you like?:";
		int myrange = NULL;
		bool cheatson = NULL;
		cin >> myrange;
		cout << endl;

		cout << "Are you cheating[Y/N]:";
			char mycheating = NULL;
			cin >> mycheating;
			if (mycheating == 'Y')
			{
				cheatson = true;
			}
			else if (mycheating == 'N')
			{
				cheatson = false;
			}
			else
			{
				cout << "cheating input not understood. Defaulitng to not cheating" << endl;
				cheatson = false;
			}




	guessingGame(mytries,myrange,cheatson);


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