// PM04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void mainMenu();

struct grootgetal {

	int* previous, next; //The next and previous node addresses
	int curval; //The value of the current node

} node; 

int main() {
	mainMenu();
	int opt = cin.get();
	while (opt != 10) {
		switch (opt) {
		case 1: break;
		case 2: break;
		case 3: break;
		case 4: break;
		case 5: break;
		case 6: break;
		case 7: break;
		case 8: break;
		case 9: break;
		default: cout << "Rather use a valid option" << endl;  break;
		}
		mainMenu();
		cin >> opt;
	}
	cout << "Have a nice day!" << endl;
	return 0;
}



/* MainMenu
* @Definition: The xuser interface
* @improvements:  create User interface (GUI)
*/
void mainMenu() {
	cout << "__________________________________" << endl << "\t      PM04" << endl << "    What action do you demand?" << endl << "__________________________________"
		<< endl << "\n 1) print \t 5) vermenigvuldig \n 2) telop \t 6) fibonacci \n 3) leesin  \t 7) voegachter \n 4) maakeen \t 8) vernietig \n 9)getallen invoeren \n \n 10) Stoppen" << endl << "__________________________________" << endl << "Number: " << endl;
}



