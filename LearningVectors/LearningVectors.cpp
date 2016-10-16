// This program stores, in two vectors, the hours worked by 5
// employees, and their hourly pay rates

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <vector>		// Needed to define vectors
using namespace std;

int main()
{
	const int NUM_Employees = 5;			// Number of employees
	vector<int> hours(NUM_Employees);		// A vector of integers
	vector<double> payRate(NUM_Employees);	// A vector of doubles
	int index;								// Loop counter

	// Input the data
	cout << "Enter the hours worked by " << NUM_Employees;
	cout << " employees and their hourly reates.\n";
	for (index = 0; index < NUM_Employees; index++)
	{
		cout << "Hours worked ny employee #" << (index + 1);
		cout << ": ";
		cin >> hours[index];
		cout << "Hourly pay rate for employee";
		cout << (index + 1) << ": ";
		cin >> payRate[index];
	}
	 
	// Display each emplyee's gross pay
	cout << "\nHere is the gross pay for each employee:\n";
	cout << fixed << showpoint << setprecision(2);
	for (index = 0; index < NUM_Employees; index++)
	{
		double grossPay = hours[index] * payRate[index];
		cout << "Employee #" << (index + 1);
		cout << ": $" << grossPay << endl;
	}
	return 0;
}