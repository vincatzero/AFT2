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
	void AddGene(const Gene &x);
	void SetNameandTrait(const string &x, const string &y);
	void AnalyzeGenotype();

  private:
	vector<Gene> genes;
};
