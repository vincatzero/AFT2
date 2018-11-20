#pragma once
#include "Allele.h"

#include <vector>
#include <string>
using namespace std;

class Gene
{
  public:
	Gene(const Allele &x, const Allele &y);

  private:
	Allele allele_A;
	Allele allele_B;
};
