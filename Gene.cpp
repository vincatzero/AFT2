#include "Gene.h"
#include "Allele.h"
#include <string>
using namespace std;

Gene::Gene(const Allele &x, const Allele &y)
{
	allele_A = x;
	allele_B = y;
};

void Gene::SetNameandTrait(const string &x, const string &y)
{
	geneName = x;
	geneTrait = y;
};

string Gene::GetTrait()
{

	return geneTrait;
};

string Gene::GetName() { return geneName; };
