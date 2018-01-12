// Arvid Ahlborg uppgift 3
#include <iostream>
using namespace std;

int main()
{
  cout << "Mata in din text: " << endl;  
  string text;                                                                                                                                            
  getline(cin, text);
  cout << "Mata in tecken att leta efter: " << endl;
  string tecken;
  getline(cin, tecken);
  int pos = text.find(tecken, 0);
  string tal = text.substr(pos,4);
  cout << "\"" << tal << "\"" << " plockas ut" << endl;
  
  
 
  return 0;
}
 
