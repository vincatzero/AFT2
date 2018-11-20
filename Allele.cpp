#include "Allele.h"
#include <string>
using namespace std;

Allele::Allele()
{
	type1 = "noType1Set";
	sequence1 = "noSequence1Set";
	variant1 = "noVariant1Set"; //DO I NEED 2 SETS?
};
Allele::Allele(const string &x, const string &y, const string &z)
{

	type1 = x;
	variant1 = y;
	sequence1 = z;
};
