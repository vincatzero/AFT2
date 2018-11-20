#pragma once

#include "Gene.h"
#include "Chromosome.h"
#include "Allele.h"
#include <vector>
#include <string>

using namespace std;

class GeneSequencer
{

  public:
	void CreateChromosome();

  private:
	vector<Gene> genes;
};