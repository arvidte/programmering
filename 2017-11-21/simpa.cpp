#include <iostream>
using namespace std;

int main()
{

  // ett val mellan två
  // alternativ, selektion
  // i ett aktivitetsdiagram 
  // Något som entydigt 
  // är sant eller falskt
  cout << "OM du har rakade sidor skriv in siffran 1 " << endl;
  cout << "Om du inte har rakade sidor skriv in siffran 11 " << endl;
  int i;
  cin >> i;
  if (i<10) 
  {
  cout << "Snyggt" << endl;
  }
  if (i>10)
  {
  cout << "din orakadejävel" << endl;  
  }
  return 0;
} 
