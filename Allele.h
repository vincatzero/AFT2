#include <vector>
#include <string>
#pragma once
using namespace std;
class Allele
{
  public:
	Allele(const string &x, const string &y, const string &z);
	Allele();

  private:
	string type1;
	string sequence1;
	string variant1;
};
