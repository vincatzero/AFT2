#include "GeneSequencer.h"
#include "Allele.h"
#include "Gene.h"
#include <iostream>
#include <string>
using namespace std;

Chromosome::Chromosome(){
	//default constructor needed?

};

void Chromosome::AddGene(const Gene &x)
{
	genes.push_back(x);
};

void Chromosome::AnalyzeGenotype()
{
	string expressedAllele;
	string nucleotideSequence;
	Allele allele;
	nucleotideSequence = allele.GetVariant();

	for (unsigned int i = 0; i < genes.size(); i++)
	{
		if (genes.at(i).GetName() == "test")
		{
		}
		//	cout << "Expressed allele:   " << genes.at(i). << endl;
		//cout << "Nucleotide sequence:" << endl;
	}; /*expressedAllele = allele.GetVariant();
			cout << "         Gene " << i + 1 << endl;
			cout << "Name:               " << genes.at(i).GetName() << endl;
			cout << "Genetic trait:      " << genes[i].GetTrait() << endl; */
};
