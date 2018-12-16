#include "stdafx.h"
#include "string"
#include "iostream"
using namespace std;

class Fraction {

public:

	Fraction( string ms ) {
	
		frac = ms;

	}

	Fraction operator = (string a)
	{
		return Fraction(a);
	}

	string frac = "";

	double getDouble() {

		double value = 1;


		int pos = frac.find("/");
		string secTr = frac.substr(pos + 1);
		string firsTr = frac.substr(0, pos);
		value = (stod(firsTr) / stod(secTr));

		return value;
	}

	const bool operator == (Fraction& newFr)
	{

		if (this->getDouble() == newFr.getDouble()) {

			return true;

		}
		else
		{
			return false;
		}

	}

	const bool operator != (Fraction& newFr)
	{

		if (this->getDouble() == newFr.getDouble()) {

			return false;

		}
		else
		{
			return true;
		}

	}


};

int main()
{
	Fraction * fr = new Fraction("-4.5/5");
	Fraction * fr1 = new Fraction("4.5/5");
	Fraction * fr2 = new Fraction("-4.5/5");

	if (*fr == *fr2)
		cout << "fr (-4.5/5) == fr2 (-4.5/5)\n";
		if (*fr != *fr1)
			cout << "fr (-4.5/5) != fr1 (4.5/5)\n";
	system("pause");
	return 0;
}

