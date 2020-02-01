/*-----------------------------
*Program:Lab1.cpp
*Programmer: Cameron Hattendorf
*Description: A program to calculate 
		the tax, tip and total of a 
		$44.50 meal
*Date:1/29/2020
*-----------------------------*/

# include <iostream>

using namespace std;

int Main()
{
	//Assign Variables
	double mealCost, tax = 0.0675, taxAmount, tip = 0.15, tipAmount, total;

	//Display Calculate the current bill
	cout << "Welcome to the Restaurant!"<< endl;
	//Prompt What was the meal charge ?
	cout << "How much was the meal?" << endl;
	//Get double meal
	cin >> mealCost;
	//Multiply mealCost by .0675(tax)Assign to taxAmount
	taxAmount = mealCost * tax;
	//Sum of mealCost and tax amount to Total
	total = mealCost + taxAmount;
	//Mutiply total by .15 (tip)assign to tipAmount
	tipAmount = total * tip;
	//Sum total and tipAmount to total
	total = total + tipAmount;
	//Display mealCost, taxAmount, tipAmount& Total
	cout << "Thank you for eating with us!" << endl
		<< "Your meal cost: " << mealCost << endl
		<< "           tax: " << taxAmount << endl
		<< "           tip: " << tipAmount <<endl
		<< "   ------------------"
		<< "   Grand total: " << total;
	return 0;

}