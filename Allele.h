#include <vector>
#include <string>

#pragma once
using namespace std;
class Allele
{
  public:
	Allele(const string &x, const string &y, const string &z);
	Allele();
	string GetType();
	string GetVariant();
	void ReturnToMenu();

  private:
	string alleleVariant;
	string alleleType;
	string nucleotideSequence;
};
