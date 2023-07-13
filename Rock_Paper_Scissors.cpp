#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int getUsersPlay();
int getComputersPlay();
void scorePlay(int userPlay, int computerPlay);

int main()
{
	srand(time(0));

	int computerPlay = getComputersPlay();
	int userPlay = getUsersPlay();

	if (userPlay >= 1 && userPlay <= 3)
	{
		scorePlay(userPlay, computerPlay);
	}
	else
	{
		cout << "Error, invalid menu choice." << endl;
	}
	return 0;
}

int getUsersPlay()
{
	int userPlay;
	cout << "Play Game of Rock, Paper, Scissors" << endl;
	cout << "\n\t1 = Rock" << endl;
	cout << "\t2 = Paper" << endl;
	cout << "\t3 = Scissors" << endl;
	cout << "\nChoose your play [1, 2, or 3]: ";
	cin >> userPlay;

	return userPlay;
}

int getComputersPlay()
{
	int computerPlay;
	computerPlay = rand() % 3 + 1;
	return computerPlay;
}

void scorePlay(int userPlay, int computerPlay)
{
	if (userPlay == computerPlay)
	{
		switch (userPlay)
		{
		case 1:
			cout << "\nThe game is a tie. Both the player and computer played rock.";
			break;
		case 2:
			cout << "\nThe game is a tie. Both the player and computer played paper.";
			break;
		case 3:
			cout << "\nThe game is a tie. Both the player and computer played scissors.";
			break;
		}
	}

	if (userPlay == 1 && computerPlay != 1)
	{
		if (computerPlay == 2)
		{
			cout << "\nThe computer wins the game. Paper covers rock.";
		}
		else if (computerPlay == 3)
		{
			cout << "\nThe player wins the game. Rock crushes scissors.";
		}
	}

	else if (userPlay == 2 && computerPlay != 2)
	{
		if (computerPlay == 3)
		{
			cout << "\nThe computer wins the game. Scissors cut paper.";
		}
		else if (computerPlay == 1)
		{
			cout << "\nThe player wins the game. Paper covers rock.";
		}
	}

	else if (userPlay == 3 && computerPlay != 3)
	{
		if (computerPlay == 2)
		{
			cout << "\nThe player wins the game. Scissors cut paper.";
		}
		else if (computerPlay == 1)
		{
			cout << "\nThe computer wins the game. Rock crushes scissors.";
		}
	}

	cout << endl;
	return;
}