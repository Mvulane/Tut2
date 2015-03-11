#include<iostream>
#include<string>
#include "Fraction.h"
using namespace std;

int main()
{
	Fraction first;
	Fraction second;
	Fraction frac1;
	Fraction frac2;
	Fraction frac3;
	Fraction frac4;
	cout << "First Fraction" << endl;
	first.Values();
	cout << "second Fraction" << endl;
	second.Values();
	frac1.Add(first, second);
	frac2.Subtr(first, second);
	frac3.Multi(first, second);
	frac4.Divi(first, second);

	cout << "Result of Summation" << endl;
	Print(frac1);
	cout << "Result of Subtraction" << endl;
	Print(frac2);
	cout << "Result of Multiplication" << endl;
	Print(frac3);
	cout << "Result of Division" << endl;
	Print(frac4);

	system("pause");

	return 0;
}