#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
void countvowel(string datafile);
void reverse(string datafile);
void countwords(string datafile);
void capitalising(string datafile);
int main()
{
  string datafile;
  ifstream infile;
  infile.open("module.txt");

  getline(infile, datafile);
  countvowel(datafile);
  reverse(datafile);
  countwords(datafile);
  capitalising(datafile);
  int a = 0, e = 0, i = 0, o = 0, u = 0;
  int words;
}

void countvowel(string datafile)
{

  int a = 0, e = 0, i = 0, o = 0, u = 0;

  for (int k = 0; k < datafile.length(); k++)
  {
    if (datafile[k] == 'a')
    {
      a++;
    }
    else if (datafile[k] == 'e')
      e++;
    else if (datafile[k] == 'i')
      i++;
    else if (datafile[k] == 'o')
      o++;
    else if (datafile[k] == 'u')
      u++;
  }
  cout << "the number of vowels is "
       << " " << a + e + i + o + u << endl;
}
void reverse(string datafile)
{
  int i = datafile.length();
  for (int i = datafile.length(); i > 0; i--)
  {
    cout << datafile[i];
  }
  cout << datafile[i] << " "
       << "( is the reversed text)." << endl;
}
void countwords(string datafile)
{
  int words = 1;
  for (int m = 0; m < datafile.length(); m++)
  {
    if (datafile[m] == ' ')
      words++;
  }
  cout << "the number of words is"
       << " " << words << endl;
}
void capitalising(string datafile)
{
  for (int i = 0; i < datafile.length(); i++)
  {
    if (datafile[i] == 'h')
    {
      datafile[i] = toupper(datafile[i]);
    }
    else if (datafile[i] == ' ' && datafile[i + 2] != ' ')
    {
      datafile[i + 2] = toupper(datafile[i + 2]);
    }
  }
  cout << datafile;
}
