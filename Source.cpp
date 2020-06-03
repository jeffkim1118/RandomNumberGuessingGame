#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main() {
	int guess, answer;
	int tries = 0;
	
	char yesOrNo;

	play:
	srand(time(NULL));

	answer = rand() % 100 + 1;

	do
	{
		printf("Guess a postive integer between 1 and 100: ");
		cin >> guess;
		tries++;

		if (guess < answer) {
			printf("Your guess is lower than the answer!\n");
		}
		else if (guess > answer) {
			printf("Your guess is higher than the answer!\n");
		}
		
		else if (guess < 0) {
			printf("Your guess is lower than 0, enter a postive integer!\n");
		}
		else
		{
			cout << "You are correct! The answer is " << answer << endl;
			cout << "It took " << tries << " tries for you to guess the number!" << endl;
			tries = 0;
		}
		

	} while (guess != answer);
	
	cout << "Do you want to play again?(y/n): " << endl;
	cin >> yesOrNo;
	
	if (yesOrNo == 'y' || yesOrNo == 'Y') {
		goto play;
	}
	else if(yesOrNo == 'n'|| yesOrNo == 'N')
	{
		cout << "Thank you for playing and goodbye!" << endl;
		system("exit");
	}
}




