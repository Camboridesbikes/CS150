/*-----------------------------
*Program:Lab1.cpp
*Programmer: Cameron Hattendorf
*Description: A program to recieve
			interview questions and		
			display results of the 
			interview
*Date:1/27/2020
*-----------------------------*/

#include <iostream>
#include <string>

using namespace std;

int main() 
{
	//Declare variable to hold the answers to the interview questions
	//	Name, age, dob, how many classes, how many credits need to graduate, favorite movie, favorite food do they like to cook ?
	string name;
	int age, dobMonth, dobDay, dobYear, creditsNeeded;
	string classAmount, favMov, favFood, cook; 
	
	//cook started out as a bool - but is not human readable w/ current understanding for results of the interview

	//Display welcome / intro message
	cout << "Good morning!\n"
		<< "Today you're going to interview another student." << endl;
	system("pause");

	//Display 'student's name'
	cout << "What is the student's name?" << endl;

	//Prompt user for name
	//Get name
	getline(cin, name);

	//Display 'Student's Age'
	cout << "How old are they?" << endl;

	//Prompt user for age
	//Get age
	cin >> age;

	//Display 'Student date of birth'
	//Prompt user for dob
	//Get dob
	cout << "When were they born?\n"
		<< "Month:" << endl;
		
	cin >> dobMonth;

	cout << "Day:" << endl;

	cin >> dobDay;

	cout << "Year:" << endl;

	cin >> dobYear;
	
	//Display 'how many classes'
	cout << "How many classes are they taking right now?" << endl;

	//Prompt user for classAmount
	//Get classAmount
	cin >> classAmount;

	//Display 'how many credits to graduate'
	cout << "How many Credits do they need to graduate?" << endl;

	//Prompt user for creditsNeeded
	//Get creditsNeeded
	cin >> creditsNeeded;

	/* cin.ignore would mark for clear
		cin.clear would actually clear it*/

	//getline(cin, favMov) is an alternative way to clear the input;
	cin.ignore();
	cin.clear();


	//Display 'Favorite movie?'
	cout << "What is their favorite movie?" << endl;

	//Prompt user for favMov
	//Get favMov
	getline(cin, favMov);

	//Display 'favorite food?'
	cout << "What is their favorite food?" << endl;

	//Prompt user favFood
	//Get favFood
	cin >> favFood;

	//Display 'Do they like to cook?'
	cout << "Do they like to cook? (true/false)" << endl;

	//Prompt user for cook
	//Get cook
	cin >> cook;

	//Display results in a paragraph
	cout << name << " is " << age << "years old and they were born " << dobMonth << "/" << dobDay << "/" << dobYear << ".\n"
		<< "They're taking " << classAmount << " of classes. They only have " << creditsNeeded << " credits left to graduate.\n"
		<< "Their favorite movie is " << favMov << ", favorite food is " << favFood << ", and to say that they cook would be " << cook <<"." << endl;

	//Pause
	system("pause");
	
	//Return 0
	return 0;
}