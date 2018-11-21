#include "Allele.h"
#include <string>
using namespace std;

Allele::Allele()
{
	alleleVariant = "noVariantSet";
	alleleType = "noTypeSet";
	nucleotideSequence = "noSequenceSet";
	//DO I NEED A CONSTRUCTOR?
};
Allele::Allele(const string &x, const string &y, const string &z)
{
	alleleVariant = y;
	alleleType = x;
	nucleotideSequence = z;
};

string Allele::GetType()
{
	return alleleType;
};

string Allele::GetVariant()
{
	return alleleVariant;
};