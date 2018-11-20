#include "Gene.h"
#include "Allele.h"
#include <string>
using namespace std;

Gene::Gene(const Allele &x, const Allele &y)
{
	allele_A = x;
	allele_B = y;
};