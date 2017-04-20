//CPT-180
//Programmer: Zach Murphy on 4-19-2017
#include <iostream>
#include <math.h>
#include <string>
#include <cmath>
#include <iomanip>
#include <conio.h>
using namespace std;

//function prototype declarations
double getPrice();
double calculateRetail(double, double);

int main() {
	//number of calculations variable user choice
	int numOfCalcs;

	//intro to user
	cout << "*******************************************************************************\n";
	cout << "\t\t Retail Sale Calculator\n";
	cout << "This program calculates the retail cost based off wholesale and markup.\n";
	cout << "You can make as many calculations as you would like.\n";

	//get number of how many calculations user would like to make
	cout << "Please enter how many calculations you need to make: ";
	cin >>numOfCalcs;

	//loop to execute per numofcalcs, 
	for (int calcRound = 1; calcRound <= numOfCalcs; calcRound++) {
		cout << endl;
		cout << "\t\tCalculation # " << calcRound << endl;
		getPrice();
	}
	
	//when finished with all calculatons
	cout << "You have made all your calculations desired.\n";
	cout << "*******************************************************************************\n";

	//allow user to exit program
	cout << "Please press any key to exit...";
	_getch();
	return 0;
}
double getPrice() {
	/*
	This function gets the wholesale price
	*/
	double wholesalePrice, markupPercent;
	cout << "Please enter the whole sale cost of item: ";
	cin >> wholesalePrice;
	cout << "Please enter markup percent: ";
	cin >> markupPercent;

	//pass wholesale to calculateRetail Function
	calculateRetail(wholesalePrice, markupPercent);
	return 0;

}
double calculateRetail(double wholeSale, double markup) {
	/*
	This functions takes in a vairbale wholeSales, and markup.
	Then it calculates and returns the retail price to user
	
	*/

	//variable declarations
	double markupDec, retailCosts, calculation;
	
	//calculations
	markupDec = markup / 100;
	calculation = markupDec * wholeSale;
	retailCosts = wholeSale + calculation;

	//output nicely printed
	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	std::cout << "The retail cost of item is: $" << retailCosts << "\n";
	cout << endl;

	return 0;
}
