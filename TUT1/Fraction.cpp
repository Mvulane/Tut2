#include<iostream>
#include<string>
#include "Fraction.h"
using namespace std;


void Fraction::Values()
{
	cout << "Enter the numarator" << endl;
	cin >> numarator;
	cout << "Enter the denominator" << endl;
	cin >> denominator;
};

void Print(Fraction A);
int gcd(int, int);


void Fraction::Add(Fraction A, Fraction B)
{
	numarator = (A.numarator * B.denominator) + (A.denominator * B.numarator);
	denominator = (A.denominator * B.denominator);
};

void Fraction::Subtr(Fraction A, Fraction B)
{
	numarator = (A.numarator * B.denominator) - (A.denominator * B.numarator);
	denominator = (A.denominator * B.denominator);
};

void Fraction::Multi(Fraction A, Fraction B)
{
	numarator = (A.numarator * B.numarator);
	denominator = (A.denominator * B.denominator);
};

void Fraction::Divi(Fraction A, Fraction B)
{
	numarator = (A.numarator * B.denominator);
	denominator = (A.denominator * B.numarator);
};
//Greatest common divisor function
int gcd(int a, int b)
{
	int c = a % b;     // Euclids Algorithm
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	return b;
};
// Function for printing simplified fractions  
void Print(Fraction A)
{
	int i = 0;
	int zz = A.numarator;
	int zy = A.denominator;
	int rem = zz%zy;//remainder
	int gcd1 = gcd(zz, zy);//gcd for numerator & denominator
	int gcd2 = gcd(rem, zy);//gcd for remainder and denominator


	if (zz > zy || (-1)*zz > zy || zz > (-1)*zy)// for counting how manu times the denominator goes to te numerator if it an improper fraction
	{
		if (zz < 0)
		{
			do
			{
				zz += zy;
				i++;
			} while (zz < 0);
		}
		else
		{
			do
			{
				zz -= zy;
				i++;
			} while (zz > 0);
		}
	}

	if ((i - 1) == 0)
	{

		cout << zz / gcd1 << "/" << zy / gcd1 << endl;
	}//it will print this,if it is not a mixed fraction
	else{

		cout << i - 1 << " " << rem / gcd2 << "/" << zy / gcd2 << endl;
	}
};
