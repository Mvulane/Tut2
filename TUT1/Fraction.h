#ifndef FRACTION_H
#define FRACTION_H

class Fraction //class definition
{


public:
	Fraction(); // default constructor
	int numarator;
	int denominator;
	void Add(Fraction, Fraction);
	void Subtr(Fraction, Fraction);
	void Multi(Fraction, Fraction);
	void Divi(Fraction, Fraction);
	void Values();
};



#endif