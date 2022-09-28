// Program Title: NewSummerJob
// Program Description: This program asks the user for their hourly pay and hours worked, along with how much percentage they want going towards shopping, entertainment, and savings.
// Author: Dylan Dover
// Date Created: 09-11-2022

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Constant Declarationss
const double COL1 = 16;
const double COL2 = 2;
const double COL3 = 6;
const double tax = 15;

int main() {
	// Declarations
	string name;
	double hourly, hours, wage, intSHP, intENT, intSAV, endTAX, endSHP, endENT, endSAV, remainder;

	// Program Title and Description
	cout << "Program Title: NewSummerJob" << endl << "Program Description: This program asks the user for their hourly pay and hours worked," << endl << "along with how much percentage they want going towards shopping, entertainment, and savings." << endl << endl;

	// User Input
	cout << "What is your full name? "; getline(cin, name);
	cout << "What is your hourly payrate? $"; cin >> hourly;
	cout << "How many hours have you worked? "; cin >> hours; cout << endl;
	cout << "What percentage do you want to go towards shopping? "; cin >> intSHP;
	cout << "What percentage do you want to go towards entertainment? "; cin >> intENT;
	cout << "What percentage do you want to go towards savings? "; cin >> intSAV;

	// Calculations
	wage = hourly * hours;
	endTAX = (tax / 100) * wage;
	endSHP = (intSHP / 100) * wage;
	endENT = (intENT / 100) * wage;
	endSAV = (intSAV / 100) * wage;
	remainder = wage - (endTAX + endSHP + endENT + endSAV);

	// Output
	system("CLS");
	cout << fixed << showpoint << setprecision(2);
	cout << setw(COL1) << left << "Name:" << setw(COL2) << right << setw(COL3) << name << endl;
	cout << setw(COL1) << left << "Wages:" << setw(COL2) << "$" << right << setw(COL3) << wage << endl;
	cout << setw(COL1) << left << "Taxes:" << setw(COL2) << "$" << right << setw(COL3) << endTAX << endl;
	cout << setw(COL1) << left << "Shopping:" << setw(COL2) << "$" << right << setw(COL3) << endSHP << endl;
	cout << setw(COL1) << left << "Entertainment:" << setw(COL2) << "$" << right << setw(COL3) << endENT << endl;
	cout << setw(COL1) << left << "Savings:" << setw(COL2) << "$" << right << setw(COL3) << endSAV << endl;
	cout << setw(COL1) << left << "Remainder:" << setw(COL2) << "$" << right << setw(COL3) << remainder << endl;

	return 0;
}