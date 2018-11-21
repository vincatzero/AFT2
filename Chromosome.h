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
	Chromosome(Gene &x);
	void AddGene(const Gene &x);
	void SetNameandTrait(const string &x, const string &y);
	void AnalyzeGenotype();
	void InputFromFile(ifstream &ifs);

  private:
	vector<Gene> genes;
};
