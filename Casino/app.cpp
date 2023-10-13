#include <iostream>
#include <cstdlib>
#include <string>
#include <thread>


using namespace std;

int main() {
	char start;
	int balance = 200;
	int bet = 0;
	int number;
	int w_number;
	int jackpot;
	int range;
	int k = 2;

	cout << "Welcome to our mini-casino, you can bet any money.\n"
		"You can try with a free $200!!!\n"
		"Conditions:\n"
		"1) Bet\n"
		"2) Choose number from 1 to a range you want.\n"
		"3) Enjoy!";
	cout << endl << "Press enter to start." << endl;

	while (cin.get() != '\n') {

	}

	cout << "So let's start!";

	this_thread::sleep_for(1s);

	while (balance > 0) {
		bet = 0;
		system("cls");

		cout << "Your current balance: $";
		cout << balance;

		cout << endl << "Choose a range for a bet.\n"
			"From 1 to ";
		cin >> range;

		while (bet <= 0 || bet > balance) {
			cout << "Make a bet: $";
			cin >> bet;
			if (bet < 0) {
				cout << "A BET SHOULD BE MORE THAN 0 FUCKERS";
			}
		}

		balance -= bet;

		this_thread::sleep_for(1s);

		system("cls");

		jackpot = k * range + bet;
		cout << "Your win will be $" << jackpot;


		cout << endl << "Your current balance: $";
		cout << balance;

		cout << endl << "Enter any number from 1 to " << range << ": ";
		cin >> number;

		w_number = rand() % range;

		if (number == w_number) {
			cout << "Hurray!!! You won!";
			balance += jackpot;
			cout << endl << "Your current balance: $";
			cout << balance;

			this_thread::sleep_for(2s);
			continue;

		}
		else {
			cout << "Unlucky this time, try again...";
			this_thread::sleep_for(2s);
		}
		cout << endl << "The number was: " << w_number;

		this_thread::sleep_for(2s);
	}
	system("cls");
	cout << "You're too broke for this, come and play, when you'll have enough money....";
};