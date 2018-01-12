#include <iostream>
using namespace std;

int main()
{

  // ett val mellan två
  // alternativ, selektion
  // i ett aktivitetsdiagram 
  // Något som entydigt 
  // är sant eller falskt
  cout << "Mata in ett heltal";
  int i;
  cin >> i;
  if (i>=10) 
  {
    cout << "Du matade in ett tal, större eller lika med 10" << endl; 
  }
  else // .. utförs detta istället 
  {
    cout << "Du matade in ett tal, mindre eller lika med 10" << endl;
  }
  
  return 0;
}
 
