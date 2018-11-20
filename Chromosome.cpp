#include "GeneSequencer.h"
#include "Allele.h"
#include "Gene.h"
#include <iostream>
#include <string>
using namespace std;

Chromosome::Chromosome(){

};
Chromosome::Chromosome(string &x, string &y)
{
	geneName = x;
	geneTrait = y;
};
void Chromosome::addGene(const Gene &x)
{
	genes.push_back(x);
};
