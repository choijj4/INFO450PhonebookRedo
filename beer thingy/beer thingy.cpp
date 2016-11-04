// Phonebook.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>  
#include <string>
#include <fstream>


using namespace std;

char pb[100][2][50];
void addEntry(char arr[100][2][50]);
void display(char arr[100][2][50]);
int i = 0;
int main() {
		
	

	string line;
	ifstream myfile("example.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';

		}
		{myfile.close();
		}

	
	}


	char opt;
	do {
		cout << "\nInfo 450" << endl;
		cout << "Phonebook\n" << endl;
		cout << "Menu" << endl;
		cout << " [A]dd new entry   --Enter A   " << endl;
		cout << " [D]isplay         --Enter D  " << endl;
		cout << " [Q]uit            --Enter Q   " << endl;
		cin >> opt;
		if (opt == 'a' || opt == 'A')
		{
			if (i < 100) {

				addEntry(pb);
				
			}
			else {
				cout << "Phone book is Full!" << endl;
			}
		}
		else if (opt == 'd' || opt == 'D')
		{
			display(pb);
		}
		else if (opt == 'q' || opt == 'Q')
			break;
	} while (1 == 1);

	return 0;


}

void addEntry(char arr[100][2][50])
{
	cin.clear();
	cin.ignore();
	cout << "Please Enter First and Last Name?" << endl;
	cin.getline(arr[i][0], 50);

	cout << "Please Enter the Home Phone Number?" << endl;
	cin.getline(arr[i][1], 50);
	

	cout << "Please Enter the Mobile Phone Number" << endl;
	cin.getline(arr[i][2], 50);
	i++;

	for (int c = -1; c < i - 1; c++) {
		if ((strcmp(arr[c][0], arr[i - 1][0]) == 0) && (i - 1 != 0))
		{
			cout << "you already did that - press enter" << endl;
			i--;
			addEntry(arr);
			break;
		}
	}
}

		void display(char arr[100][2][50])
		{

			for (int a = 0; a < i; a++)
			{
				cout << "Entry: " << a + 1 << " Name: " << arr[a][0] << " Home Number: " << arr[a][1] <<" Mobile Number: " << arr[a][2] << endl;
			}
	}
