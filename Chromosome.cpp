#include "GeneSequencer.h"
#include "Allele.h"
#include "Gene.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Chromosome::Chromosome(){
	//default constructor needed?

};
Chromosome::Chromosome(Gene &x){

};

void Chromosome::AddGene(const Gene &x)
{
	genes.push_back(x);
};

void Chromosome::AnalyzeGenotype()
{
	Allele allele;
	string expressedAllele;
	string nucleotideSequence;
	Allele Alleletest;
	nucleotideSequence = allele.GetVariant();
	for (int i = 0; i < this->allele_A; i++)
	{
		cout << genes[i]->Allele.GetVariant();
	};

	//	cout << "Expressed allele:   " << genes.at(i). << endl;
	//cout << "Nucleotide sequence:" << endl;
}; /*expressedAllele = allele.GetVariant();
			cout << "         Gene " << i + 1 << endl;
			cout << "Name:               " << genes.at(i).GetName() << endl;
			cout << "Genetic trait:      " << genes[i].GetTrait() << endl; */

void Chromosome::InputFromFile(ifstream &ifs)
{
	string output;
	while (getline(ifs, output))
	{
		//cout << output;
	}
	cout << "test";
	/*(Gene newGene(newAlleleA, newAlleleB);
	newGene.SetNameandTrait(name, trait);
	newChromosome.AddGene(newGene);*/
};
