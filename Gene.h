#pragma once
#include "Allele.h"

#include <vector>
#include <string>
using namespace std;

class Gene
{
  public:
	Gene(const Allele &x, const Allele &y);
	void SetNameandTrait(const string &x, const string &y);
	string GetName();
	string GetTrait();

  private:
	Allele allele_A;
	Allele allele_B;
	string geneName;
	string geneTrait;
};
