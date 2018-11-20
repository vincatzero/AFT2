#pragma once

#include "Gene.h"
#include "Allele.h"
#include <vector>
#include <string>
using namespace std;

class Chromosome
{

  public:
	Chromosome();
	Chromosome(string &x, string &y);
	void addGene(const Gene &x);

  private:
	vector<Gene> genes;
	string geneName;
	string geneTrait;
};
