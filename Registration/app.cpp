#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;


int SaveData(string login, string password, string age, string mail) {
	// Сохарнить данные пользователя в файл
	ofstream data("D:\\Projects\\C++\\Registration\\Registration\\user_data\\" + login + "_" + password + ".txt");
	data << login + "\n" + password + "\n" + age + "\n" + mail;
	data.close();
	return 0;
}


int main() {
	cout << "Hello, have you registrated already?\n"
		"Type Y - for yes, N - for no." << endl;
	string ans;
	cin >> ans;

	string login;
	string password;
	string User;
	if (ans == "Y") {
		cout << "Alright, sign in then!" << endl;
		cout << "Login: ";
		cin >> login;
		cout << "Password: ";
		cin >> password;
		ifstream data;
		data.open("D:\\Projects\\C++\\Registration\\Registration\\user_data\\" + login + "_" + password + ".txt");
		if (data) {
			ifstream data("D:\\Projects\\C++\\Registration\\Registration\\user_data\\" + login + "_" + password + ".txt");
			string stringData;
			string info[2] = { "Age: ", "Mail: " };
			for (int x = 0; x < 4; x++) {
				getline(data, stringData);
				if (x > 1) {
					cout << info[x - 2] + stringData << endl;
				}
			}
		}
		else {
			cout << "There is no information about you, check for mistakes or registrate if you haven't done it yet.";
		}
	}
	else if (ans == "N") {
		string age;
		string mail;
		cout << "Ok, let's registrate then!\n";
		cout << "Login: ";
		cin >> login;
		cout << "Password: ";
		cin >> password;
		ifstream data;
		data.open("D:\\Projects\\C++\\Registration\\Registration\\user_data\\" + login + "_" + password + ".txt");
		if (data) {
			cout << "User already exist, try to sign in.";
		}
		else {
			cout << "How old are you? ";
			cin >> age;
			cout << "Your mail is: ";
			cin >> mail;
			SaveData(login, password, age, mail);
			cout << "Thanks for registration, now you can sign in.";
		}
	}
	else {
		cout << "Unknown command, please try again...";
	}
};