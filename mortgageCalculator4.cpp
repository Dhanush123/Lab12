// Lab 12
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

struct Mortgage{
	 int moneyBorrowed;
	 double annualInterestRate;
	 double monthsforPayback;
	 double monthlyPayment;
};

int main()
{
	Mortgage mort;
    cout << "Programmer: Dhanush Patel" << endl;
    cout << "Description: This program calculates a mortgage using user prompted values over a 30 year payback period." << endl;
    cout << endl;

    cout << "What's the amount borrowed? ";
    cin >> mort.moneyBorrowed;
    cin.ignore(1000, 10);

    cout << "What's the annual interest rate? ";
    cin >> mort.annualInterestRate;
    cin.ignore(1000, 10);
    cout << endl;

    double monthlyInterestRate = mort.annualInterestRate/1200;
    double yearsForPayback = 30;
    double monthsforPayback = yearsForPayback * 12;
    double monthlyPayment = (mort.moneyBorrowed * pow(1+(monthlyInterestRate),monthsforPayback) * monthlyInterestRate)/((pow(1+monthlyInterestRate,monthsforPayback))-1);

    //Show amount borrowed, annual interest rate, payback period, and monthly payment
    cout << "Amount borrowed = $" << mort.moneyBorrowed << endl;
    cout << "Annual interest rate = " << mort.annualInterestRate << "%" << endl;
    cout << "Payback period = " << yearsForPayback << " Years" << endl;
    cout.setf( ios:: fixed | ios:: showpoint);
    cout << setprecision(2);
    cout << "Monthly payment = $" << monthlyPayment << endl;

    ofstream fout;
    fout.open("mortgage.txt", ios::app);
    fout << "Amount borrowed = $" << mort.moneyBorrowed << endl;
    fout << "Annual interest rate = " << mort.annualInterestRate << "%" << endl;
    fout << "Payback period = " << yearsForPayback << " Years" << endl;
    fout.setf( ios:: fixed | ios:: showpoint);
    fout << setprecision(2);
    fout << "Monthly payment = $" << monthlyPayment << endl;
    fout << endl;
    fout.close();
}
